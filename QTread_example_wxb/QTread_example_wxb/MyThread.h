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
	volatile bool stopped;//volatile关键字，可以使stopped变量在任何时候都保持最新的值，从而可以避免在多个线程中访问它时出错
};

