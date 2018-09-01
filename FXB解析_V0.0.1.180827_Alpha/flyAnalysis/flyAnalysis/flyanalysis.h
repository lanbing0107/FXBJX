#ifndef FLYANALYSIS_H
#define FLYANALYSIS_H

#include <QtWidgets/QMainWindow>
#include "ui_flyanalysis.h"
#include<GetMap.h>
//#include<GetHash.h>

class flyAnalysis : public QMainWindow
{
	Q_OBJECT

public:
	flyAnalysis(QWidget *parent = 0);
	~flyAnalysis();
	
private:
	Ui::flyAnalysisClass ui;
	GetMap getMap;  //应该在哪个文件哪个地方实例化？？？

};

#endif // FLYANALYSIS_H
