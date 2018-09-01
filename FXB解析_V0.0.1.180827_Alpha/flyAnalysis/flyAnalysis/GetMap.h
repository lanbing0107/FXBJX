#pragma once
#include "qobject.h"
#include<qmap.h>
class GetMap :
	public QObject
{
public:
	GetMap();
	~GetMap();

public:
	QMap<QString, QVariant> m_flyMap;  //注意：QMap中内容会按“键”排序？？？而不是按加入内容顺序！！
	QList<QString>m_flyParasNameList; //用该QList记录QMap（即m_flyMap）中“键”的顺序
	int m_flyNumber;
	void generateRandomNumbers();  //定义为公共成员，别的类才可以访问

	
public:
	/*
		获取数据
		QString:输入参数->参数名称
		int : 输出参数->获取到的值
		bool : 返回值->获取是否成功
	*/
	int getData(QString);
	bool getData(QString param, int &v)
	{
		bool res = false;

		//if param 存在
		res = true;
		//v = //从map获取数据
		return res;
	}
	bool getData(QString, int*v)
	{
		bool res = false;

		//if param 存在
		res = true;
		//*v = //从map获取数据
		return res;
	}

	bool getData(QStringList, QList<int> &);

	void setData(QString, int);
	void setData(QStringList, QList<int>);
};



	GetMap map;
	int value = map.getData("参数1");

	int value2 = 0;
	if (map.getData("参数1"， value2))
	{

	}

	int value3 = 0;
	if (map.getData("参数1"， &value3))
	{

	}