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

//“启动线程”按钮
void QTread_example_wxb::on_startButton_clicked()
{
	thread.start();//启动线程时调用了start()函数，start()默认调用run()函数
	ui.startButton->setEnabled(false);
	ui.stopButton->setEnabled(true);
}

//“终止线程”按钮
void QTread_example_wxb::on_stopButton_clicked()
{
	if (thread.isRunning())
	{
		thread.stop();
		ui.startButton->setEnabled(true);
		ui.stopButton->setEnabled(false);
	}
}