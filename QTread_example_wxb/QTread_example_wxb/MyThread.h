#pragma once
#include<qthread.h>
class MyThread :
	public QThread
{
	Q_OBJECT
public:
	explicit MyThread(QObject *parent=0);
	void stop();
	~MyThread();
protected:
	void run();
private:
	volatile bool stopped;//volatile�ؼ��֣�����ʹstopped�������κ�ʱ�򶼱������µ�ֵ���Ӷ����Ա����ڶ���߳��з�����ʱ����
};

