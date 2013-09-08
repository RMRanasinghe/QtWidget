#ifndef COMMUNICATOR_H
#define COMMUNICATOR_H

#include "QProcess"

class communicator
{
public:
    communicator();
    ~communicator();
    void processWrite(QString str);
    QString processRead();
private:
    QProcess octave; //main octave process.
};

#endif // COMMUNICATOR_H
