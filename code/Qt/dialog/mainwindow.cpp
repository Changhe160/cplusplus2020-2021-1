#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_dlg;
}

void MainWindow::on_actionNew_Dialog_triggered()
{
    //QString s=tr("我的对话框");
    //QMessageBox::information(this,"title",s);

    QDialog mydlg(this);
    //mydlg.exec();
    mydlg.show();

    //m_dlg=new QDialog(this);
    //m_dlg=new QDialog();
   // m_dlg->setModal(true);
    //m_dlg->show();
}
