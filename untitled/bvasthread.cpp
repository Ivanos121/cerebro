#include <QEvent>

#include <stdio.h>

#include "bvasthread.h"

void BVASThread::run()
{
  stopping = true;
  bvasDevice->init();
  counter = 0;

  while (stopping)
  {
    counter++;
    bvasDevice->readData();
    //QApplication::postEvent(receiver, new QEvent(QEvent::User));
    emit dataReady();
  }
  bvasDevice->stop();
}

void BVASThread::stopWorking()
{
  stopping = false;
}

void BVASThread::setDevice(Device *dev)
{
  bvasDevice = dev;
}
