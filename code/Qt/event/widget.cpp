#include "widget.h"
#include <QMoveEvent>

#include <QApplication>
#include <QKeyEvent>


#include <QHBoxLayout>
#include <QTime>

#include<QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
     hbox = new QHBoxLayout(this);
     hbox->setSpacing(5);

     label = new QLabel("", this);
     hbox->addWidget(label, 0, Qt::AlignLeft | Qt::AlignTop);
     button=new QPushButton("PushButton",this);

     hbox->addWidget(button,0,Qt::AlignLeft | Qt::AlignTop);

     connect(button,&QPushButton::clicked,this,&Widget::onButtonCliecked);

     QTime qtime = QTime::currentTime();
     QString stime = qtime.toString();
     label->setText(stime);

     startTimer(1000);

}

Widget::~Widget()
{
    delete label;
    delete button;
    delete hbox;
}

void Widget::onButtonCliecked()
{
    QMessageBox msgBox;
    msgBox.setText("You clicked this.");
    msgBox.exec();
}

void Widget::moveEvent(QMoveEvent *e) {

  int x = e->pos().x();
  int y = e->pos().y();

  QString text = QString::number(x) + "," + QString::number(y);

  setWindowTitle(text);
}

void Widget::keyPressEvent(QKeyEvent *event) {

   if (event->key() == Qt::Key_Escape) {
       qApp->quit();
   }
}


void Widget::timerEvent(QTimerEvent *e) {

  Q_UNUSED(e);

  QTime qtime = QTime::currentTime();
  QString stime = qtime.toString();
  label->setText(stime);
}
