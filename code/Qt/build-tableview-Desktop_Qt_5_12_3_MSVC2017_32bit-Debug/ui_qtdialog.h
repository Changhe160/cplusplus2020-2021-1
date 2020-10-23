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
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QtDialog
{
public:
    QVBoxLayout *verticalLayout;
    QColumnView *columnView;
    QTableView *table;
    QPushButton *button;

    void setupUi(QDialog *QtDialog)
    {
        if (QtDialog->objectName().isEmpty())
            QtDialog->setObjectName(QString::fromUtf8("QtDialog"));
        QtDialog->resize(477, 698);
        verticalLayout = new QVBoxLayout(QtDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        columnView = new QColumnView(QtDialog);
        columnView->setObjectName(QString::fromUtf8("columnView"));

        verticalLayout->addWidget(columnView);

        table = new QTableView(QtDialog);
        table->setObjectName(QString::fromUtf8("table"));

        verticalLayout->addWidget(table);

        button = new QPushButton(QtDialog);
        button->setObjectName(QString::fromUtf8("button"));

        verticalLayout->addWidget(button);


        retranslateUi(QtDialog);

        QMetaObject::connectSlotsByName(QtDialog);
    } // setupUi

    void retranslateUi(QDialog *QtDialog)
    {
        QtDialog->setWindowTitle(QApplication::translate("QtDialog", "CppQTableViewExample1", nullptr));
        button->setText(QApplication::translate("QtDialog", "&Add new row", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtDialog: public Ui_QtDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDIALOG_H
