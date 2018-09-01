/********************************************************************************
** Form generated from reading UI file 'flyanalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLYANALYSIS_H
#define UI_FLYANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flyAnalysisClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *flyAnalysisClass)
    {
        if (flyAnalysisClass->objectName().isEmpty())
            flyAnalysisClass->setObjectName(QStringLiteral("flyAnalysisClass"));
        flyAnalysisClass->resize(600, 400);
        menuBar = new QMenuBar(flyAnalysisClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        flyAnalysisClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(flyAnalysisClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        flyAnalysisClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(flyAnalysisClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        flyAnalysisClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(flyAnalysisClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        flyAnalysisClass->setStatusBar(statusBar);

        retranslateUi(flyAnalysisClass);

        QMetaObject::connectSlotsByName(flyAnalysisClass);
    } // setupUi

    void retranslateUi(QMainWindow *flyAnalysisClass)
    {
        flyAnalysisClass->setWindowTitle(QApplication::translate("flyAnalysisClass", "flyAnalysis", 0));
    } // retranslateUi

};

namespace Ui {
    class flyAnalysisClass: public Ui_flyAnalysisClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLYANALYSIS_H
