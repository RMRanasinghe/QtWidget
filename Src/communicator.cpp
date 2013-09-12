/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 2:08:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:Communicator class that initialize start and communicate with octave process
 *TODO: Transfer this class to octave init class and develop as a toolkit
 *lisence: GPL v2
 *
 */

#include "communicator.h"
#include "QProcess"


/*
 *Communicator class constructor. In this constructor Starts the Octave process and initialize it
 *as a QProcess.This octave process instance is globle for this class.
 *Dependancies: Octave should install into the /usr/bin/octave directory.
 */
communicator::communicator()
{
    /*
     *Communicator class should have one implementation. so set communicator class as
     *singleton implementation.
     */


    if(communicator_instance == NULL){
        communicator_instance = new communicator();
    }

    QStringList arguments;
    arguments << "--persist"; //set arguments of the octave process. --persist:Go interactive after
    octave.setProcessChannelMode(QProcess::MergedChannels); //set process channel
    octave.start("/usr/bin/octave", arguments);//If octave has installed into any other directory this should be changed.
    octave.waitForStarted();//wait for the process get started.

}

communicator::~communicator()
{
    octave.close();
}

void communicator::processWrite(QString command){
    if(octave.state()==QProcess::Starting){
        octave.waitForStarted();
        //TODO:should set a timeout and if timeout happens set a error report.
        processWrite(command);
    }
    else if(octave.state()==QProcess::Running){
        //TODO write Code
        octave.waitForReadyRead(1000);//wait until Standered output ready
        if(command.isEmpty()){
            return;
        }
        else{
            command+="\n";
            octave.write(command.toUtf8());
        }
    }
    else{
        //TODO: Error reporting
    }
}

QString communicator::processRead(){
    QString output;//this is the returned output of the Octave process.
    //TODO:implement method body

    if(octave.state()==QProcess::Starting){
        octave.waitForStarted();
        //TODO:should set a timeout and if timeout happens set a error report.
        processRead();
    }
    else if(octave.state()==QProcess::Running){
        octave.waitForReadyRead(1000);
        output=octave.readAll();
    }

    return output;
}

communicator* communicator::getInstance(){
    return communicator_instance;
}
