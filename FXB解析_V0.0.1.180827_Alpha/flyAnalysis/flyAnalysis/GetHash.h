#pragma once
#include "qobject.h"
#include<qhash.h>
class GetHash :
	public QObject
{
public:
	GetHash();
	~GetHash();
public:
	QHash<QString, QVariant>m_flyHash;
	int m_flyNumber;
	void generateRandomNumbers();  //����Ϊ������Ա�������ſ��Է���
};

