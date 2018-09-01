#pragma once
#include "qobject.h"
#include<GetMap.h>
class FlyCalculate :
	public QObject
{
public:
	FlyCalculate();
	~FlyCalculate();

private:
	GetMap getMap;
public:
	void calculateFlyParas();


};

