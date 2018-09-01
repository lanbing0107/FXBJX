#ifndef QTREAD_EXAMPLE_WXB_H
#define QTREAD_EXAMPLE_WXB_H

#include <QtWidgets/QDialog>
#include "ui_qtread_example_wxb.h"   //
#include"MyThread.h"    //�ֶ���� 

class QTread_example_wxb : public QDialog
{
	Q_OBJECT

public:
	QTread_example_wxb(QWidget *parent = 0);
	~QTread_example_wxb();

private:
	Ui::QTread_example_wxbClass ui;   //
	MyThread thread;   //���˽�ж���
private slots:
	void on_startButton_clicked();
	void on_stopButton_clicked();
};

#endif // QTREAD_EXAMPLE_WXB_H
