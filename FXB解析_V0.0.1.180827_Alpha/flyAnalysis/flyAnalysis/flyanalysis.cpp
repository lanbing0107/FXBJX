#include "flyanalysis.h"
#include<qdebug.h>

flyAnalysis::flyAnalysis(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	getMap.generateRandomNumbers();
	//qDebug() << getMap.m_flyNumber;  //������
	
}

flyAnalysis::~flyAnalysis()
{

}
