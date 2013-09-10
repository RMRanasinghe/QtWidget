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
private:
    QProcess octave; //main octave process.
};

#endif // COMMUNICATOR_H
