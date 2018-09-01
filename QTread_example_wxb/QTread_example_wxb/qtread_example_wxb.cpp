#include "qtread_example_wxb.h"

QTread_example_wxb::QTread_example_wxb(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.startButton, SIGNAL(clicked()), this, SLOT(on_startButton_clicked()));
	connect(ui.stopButton, SIGNAL(clicked()), this, SLOT(on_stopButton_clicked()));
}

QTread_example_wxb::~QTread_example_wxb()
{

}

//�������̡߳���ť
void QTread_example_wxb::on_startButton_clicked()
{
	thread.start();//�����߳�ʱ������start()������start()Ĭ�ϵ���run()����
	ui.startButton->setEnabled(false);
	ui.stopButton->setEnabled(true);
}

//����ֹ�̡߳���ť
void QTread_example_wxb::on_stopButton_clicked()
{
	if (thread.isRunning())
	{
		thread.stop();
		ui.startButton->setEnabled(true);
		ui.stopButton->setEnabled(false);
	}
}