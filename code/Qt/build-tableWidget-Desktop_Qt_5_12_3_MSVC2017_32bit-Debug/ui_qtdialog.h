/********************************************************************************
** Form generated from reading UI file 'qtdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDIALOG_H
#define UI_QTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDialog
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;

    void setupUi(QDialog *QtDialog)
    {
        if (QtDialog->objectName().isEmpty())
            QtDialog->setObjectName(QString::fromUtf8("QtDialog"));
        QtDialog->resize(443, 291);
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(12);
        QtDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/R.png"), QSize(), QIcon::Normal, QIcon::Off);
        QtDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(QtDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(QtDialog);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setRowCount(6);
        tableWidget->setColumnCount(4);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        retranslateUi(QtDialog);

        QMetaObject::connectSlotsByName(QtDialog);
    } // setupUi

    void retranslateUi(QDialog *QtDialog)
    {
        Q_UNUSED(QtDialog);
    } // retranslateUi

};

namespace Ui {
    class QtDialog: public Ui_QtDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDIALOG_H
