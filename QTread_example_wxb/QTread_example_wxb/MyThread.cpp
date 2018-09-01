#include "MyThread.h"
#include<qdebug.h>

MyThread::MyThread(QObject *parent):
QThread(parent)
{
	stopped = false;
}


MyThread::~MyThread()
{
}


void MyThread::run()
{
	qreal i = 0;
	while (!stopped)
	{
		qDebug() << QString("in MyThread: %1").arg(i);
		msleep(1000);
		i++;
	}
	stopped = false;
}

void MyThread::stop()
{
	stopped = true;//ʹ��stopped������ʵ���̵߳���ֹ����û��ʹ��Σ�յ�terminate()����
}