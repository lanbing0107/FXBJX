#include "GetMap.h"
#include<qdebug.h>
#include<qsqldatabase.h>
#include<qdir.h>
#include<qmessagebox.h>
#include<qsqlquery.h>
#include<qsqlerror.h>

GetMap::GetMap()
{
	m_flyNumber = 37;//错误！！飞行包参数实际有39个！包含 北京时间累计秒 和 北京时间
}

GetMap::~GetMap()
{
}

void GetMap::generateRandomNumbers()
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
		msgBox.setText("数据库打开失败！");
		msgBox.exec();
		return;
	}
	QSqlQuery query(db);
	QString sqlCmdSelectParalistTable = QString("SELECT * FROM paralist");
	query.exec(sqlCmdSelectParalistTable);
	//QSqlError error = query.lastError().databaseText();//调试用
	//qDebug() << error;//调试用
	int i = 0;
	while (query.next())
	{
		m_flyParasNameList.append(query.value(1).toString());
		qsrand(i);
		int paraValue = qrand();
		//qDebug() << QString("paraValue: %1").arg(paraValue);
		//qDebug() << paraValue;  //可以运行
		m_flyMap.insert(query.value(1).toString(), paraValue);
		i++;
	}
	//qDebug() << m_flyMap;  //调试用
	//qDebug() << m_flyParasNameList;  //调试用
	//QList<QVariant>flyParasValueList;
	//flyParasValueList << paraValue;

}