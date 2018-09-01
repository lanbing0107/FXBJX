/********************************************************************************
** Form generated from reading UI file 'qtread_example_wxb.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTREAD_EXAMPLE_WXB_H
#define UI_QTREAD_EXAMPLE_WXB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QTread_example_wxbClass
{
public:
    QPushButton *startButton;
    QPushButton *stopButton;

    void setupUi(QDialog *QTread_example_wxbClass)
    {
        if (QTread_example_wxbClass->objectName().isEmpty())
            QTread_example_wxbClass->setObjectName(QStringLiteral("QTread_example_wxbClass"));
        QTread_example_wxbClass->setEnabled(true);
        QTread_example_wxbClass->resize(521, 400);
        startButton = new QPushButton(QTread_example_wxbClass);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(160, 90, 75, 23));
        stopButton = new QPushButton(QTread_example_wxbClass);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setEnabled(false);
        stopButton->setGeometry(QRect(160, 150, 75, 23));

        retranslateUi(QTread_example_wxbClass);

        QMetaObject::connectSlotsByName(QTread_example_wxbClass);
    } // setupUi

    void retranslateUi(QDialog *QTread_example_wxbClass)
    {
        QTread_example_wxbClass->setWindowTitle(QApplication::translate("QTread_example_wxbClass", "QTread_example_wxb", 0));
        startButton->setText(QApplication::translate("QTread_example_wxbClass", "\345\220\257\345\212\250\347\272\277\347\250\213", 0));
        stopButton->setText(QApplication::translate("QTread_example_wxbClass", "\347\273\210\346\255\242\347\272\277\347\250\213", 0));
    } // retranslateUi

};

namespace Ui {
    class QTread_example_wxbClass: public Ui_QTread_example_wxbClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTREAD_EXAMPLE_WXB_H
