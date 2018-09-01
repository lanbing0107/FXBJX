#include "GetHash.h"
#include<qdebug.h>
#include<qsqldatabase.h>
#include<qdir.h>
#include<qmessagebox.h>
#include<qsqlquery.h>
#include<qsqlerror.h>

GetHash::GetHash()
{
	m_flyNumber = 37;//���󣡣����а�����ʵ����39�������� ����ʱ���ۼ��� �� ����ʱ��
}

GetHash::~GetHash()
{
}

void GetHash::generateRandomNumbers()
{
	QSqlDatabase db;
	db = QSqlDatabase::addDatabase("QSQLITE");
	QString currentPath = QDir::currentPath();
	QString dataBasePathName = currentPath.append("/test_flyEdit.db");
	db.setDatabaseName(dataBasePathName);
	bool ok = db.open();
	if (ok != true)
	{
		QMessageBox msgBox;
		msgBox.setText("���ݿ��ʧ�ܣ�");
		msgBox.exec();
		return;
	}
	QSqlQuery query(db);
	QString sqlCmdSelectParalistTable = QString("SELECT * FROM paralist");
	query.exec(sqlCmdSelectParalistTable);
	//QSqlError error = query.lastError().databaseText();//������
	//qDebug() << error;//������
	int i = 0;
	while (query.next())
	{
		qsrand(i);
		int paraValue = qrand();
		//qDebug() << QString("paraValue: %1").arg(paraValue);
		//qDebug() << paraValue;  //��������
		m_flyHash.insert(query.value(1).toString(), paraValue);
		i++;
	}
	qDebug() << m_flyHash;  //������
	//  qDebug() << flyParasNameList;  //������
	//QList<QVariant>flyParasValueList;
	//flyParasValueList << paraValue;

}