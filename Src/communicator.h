/*
 *
 *Author: Rajitha Ranasinghe
 *Date: 2:08:2013
 *Project: Qt widget for manipulatin plots
 *Objectave:Communicator class header file.
 *TODO: Transfer this class to octave init class and develop as a toolkit
 *lisence: GPL v2
 *
 */

#ifndef COMMUNICATOR_H
#define COMMUNICATOR_H

#include "QProcess"

class communicator
{
public:
    communicator(); //communicator constructor
    ~communicator();//communicator class distructor
    void processWrite(QString str); //send command to octave process
    QString processRead(); //read Standerd output of octave process
    static communicator* getInstance();//communicator singleton instance
private:
    QProcess octave; //main octave process.
    static communicator* communicator_instance;
};

#endif // COMMUNICATOR_H
