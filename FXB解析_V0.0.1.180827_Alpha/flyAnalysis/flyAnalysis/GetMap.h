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
	QMap<QString, QVariant> m_flyMap;  //ע�⣺QMap�����ݻᰴ���������򣿣��������ǰ���������˳�򣡣�
	QList<QString>m_flyParasNameList; //�ø�QList��¼QMap����m_flyMap���С�������˳��
	int m_flyNumber;
	void generateRandomNumbers();  //����Ϊ������Ա�������ſ��Է���

	
public:
	/*
		��ȡ����
		QString:�������->��������
		int : �������->��ȡ����ֵ
		bool : ����ֵ->��ȡ�Ƿ�ɹ�
	*/
	int getData(QString);
	bool getData(QString param, int &v)
	{
		bool res = false;

		//if param ����
		res = true;
		//v = //��map��ȡ����
		return res;
	}
	bool getData(QString, int*v)
	{
		bool res = false;

		//if param ����
		res = true;
		//*v = //��map��ȡ����
		return res;
	}

	bool getData(QStringList, QList<int> &);

	void setData(QString, int);
	void setData(QStringList, QList<int>);
};



	GetMap map;
	int value = map.getData("����1");

	int value2 = 0;
	if (map.getData("����1"�� value2))
	{

	}

	int value3 = 0;
	if (map.getData("����1"�� &value3))
	{

	}