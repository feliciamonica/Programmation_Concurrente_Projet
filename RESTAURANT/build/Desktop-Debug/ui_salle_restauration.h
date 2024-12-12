/********************************************************************************
** Form generated from reading UI file 'salle_restauration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALLE_RESTAURATION_H
#define UI_SALLE_RESTAURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Salle_restauration
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTimeEdit *timeEdit;
    QPushButton *pushButton_5;
    QGraphicsView *Salle_Restauration;
    QFrame *Carre1;
    QFrame *Table110;
    QFrame *Table152;
    QFrame *Table142_;
    QFrame *table154;
    QFrame *table128;
    QFrame *table116;
    QFrame *table126;
    QFrame *table114;
    QFrame *Table112;
    QFrame *table118;
    QFrame *table124;
    QFrame *table136;
    QFrame *table144;
    QFrame *Table132;
    QFrame *Table122;
    QFrame *table134;
    QFrame *Carre1_2;
    QFrame *Table210;
    QFrame *Table252;
    QFrame *Table242;
    QFrame *table254;
    QFrame *table228;
    QFrame *table216;
    QFrame *table226;
    QFrame *table214;
    QFrame *Table212;
    QFrame *table218;
    QFrame *table224;
    QFrame *table244;
    QFrame *Table232;
    QFrame *Table222;
    QFrame *table234;
    QFrame *table238;
    QFrame *comptoir;
    QFrame *porte_entree;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Salle_restauration)
    {
        if (Salle_restauration->objectName().isEmpty())
            Salle_restauration->setObjectName(QString::fromUtf8("Salle_restauration"));
        Salle_restauration->resize(1492, 747);
        centralwidget = new QWidget(Salle_restauration);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 10, 41, 31));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/pause.png);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 10, 41, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/start.png);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 10, 31, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/stop.png);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1080, 10, 101, 31));
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(1200, 10, 51, 29));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(130, 10, 41, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/accelerate.png);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        Salle_Restauration = new QGraphicsView(centralwidget);
        Salle_Restauration->setObjectName(QString::fromUtf8("Salle_Restauration"));
        Salle_Restauration->setGeometry(QRect(10, 50, 1481, 661));
        Salle_Restauration->setStyleSheet(QString::fromUtf8("background-image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/sol restaurant.png);"));
        Carre1 = new QFrame(centralwidget);
        Carre1->setObjectName(QString::fromUtf8("Carre1"));
        Carre1->setGeometry(QRect(170, 50, 1331, 301));
        Carre1->setFrameShape(QFrame::Shape::StyledPanel);
        Carre1->setFrameShadow(QFrame::Shadow::Raised);
        Table110 = new QFrame(Carre1);
        Table110->setObjectName(QString::fromUtf8("Table110"));
        Table110->setGeometry(QRect(1130, 30, 171, 141));
        Table110->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table10.png);"));
        Table110->setFrameShape(QFrame::Shape::StyledPanel);
        Table110->setFrameShadow(QFrame::Shadow::Raised);
        Table152 = new QFrame(Carre1);
        Table152->setObjectName(QString::fromUtf8("Table152"));
        Table152->setGeometry(QRect(1150, 190, 141, 101));
        Table152->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table2.png);"));
        Table152->setFrameShape(QFrame::Shape::StyledPanel);
        Table152->setFrameShadow(QFrame::Shadow::Raised);
        Table142_ = new QFrame(Carre1);
        Table142_->setObjectName(QString::fromUtf8("Table142_"));
        Table142_->setGeometry(QRect(820, 40, 151, 111));
        Table142_->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table2.png);"));
        Table142_->setFrameShape(QFrame::Shape::StyledPanel);
        Table142_->setFrameShadow(QFrame::Shadow::Raised);
        table154 = new QFrame(Carre1);
        table154->setObjectName(QString::fromUtf8("table154"));
        table154->setGeometry(QRect(990, 20, 131, 111));
        table154->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table4.png);"));
        table154->setFrameShape(QFrame::Shape::StyledPanel);
        table154->setFrameShadow(QFrame::Shadow::Raised);
        table128 = new QFrame(Carre1);
        table128->setObjectName(QString::fromUtf8("table128"));
        table128->setGeometry(QRect(490, 180, 151, 111));
        table128->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table8.png);"));
        table128->setFrameShape(QFrame::Shape::StyledPanel);
        table128->setFrameShadow(QFrame::Shadow::Raised);
        table116 = new QFrame(Carre1);
        table116->setObjectName(QString::fromUtf8("table116"));
        table116->setGeometry(QRect(20, 20, 131, 111));
        table116->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table6.png);"));
        table116->setFrameShape(QFrame::Shape::StyledPanel);
        table116->setFrameShadow(QFrame::Shadow::Raised);
        table126 = new QFrame(Carre1);
        table126->setObjectName(QString::fromUtf8("table126"));
        table126->setGeometry(QRect(10, 180, 121, 101));
        table126->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table6.png);"));
        table126->setFrameShape(QFrame::Shape::StyledPanel);
        table126->setFrameShadow(QFrame::Shadow::Raised);
        table114 = new QFrame(Carre1);
        table114->setObjectName(QString::fromUtf8("table114"));
        table114->setGeometry(QRect(180, 50, 131, 111));
        table114->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table4.png);"));
        table114->setFrameShape(QFrame::Shape::StyledPanel);
        table114->setFrameShadow(QFrame::Shadow::Raised);
        Table112 = new QFrame(Carre1);
        Table112->setObjectName(QString::fromUtf8("Table112"));
        Table112->setGeometry(QRect(180, 190, 131, 101));
        Table112->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table2.png);"));
        Table112->setFrameShape(QFrame::Shape::StyledPanel);
        Table112->setFrameShadow(QFrame::Shadow::Raised);
        table118 = new QFrame(Carre1);
        table118->setObjectName(QString::fromUtf8("table118"));
        table118->setGeometry(QRect(340, 0, 151, 111));
        table118->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table8.png);"));
        table118->setFrameShape(QFrame::Shape::StyledPanel);
        table118->setFrameShadow(QFrame::Shadow::Raised);
        table124 = new QFrame(Carre1);
        table124->setObjectName(QString::fromUtf8("table124"));
        table124->setGeometry(QRect(340, 160, 131, 111));
        table124->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table4.png);"));
        table124->setFrameShape(QFrame::Shape::StyledPanel);
        table124->setFrameShadow(QFrame::Shadow::Raised);
        table136 = new QFrame(Carre1);
        table136->setObjectName(QString::fromUtf8("table136"));
        table136->setGeometry(QRect(990, 160, 131, 111));
        table136->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table6.png);"));
        table136->setFrameShape(QFrame::Shape::StyledPanel);
        table136->setFrameShadow(QFrame::Shadow::Raised);
        table144 = new QFrame(Carre1);
        table144->setObjectName(QString::fromUtf8("table144"));
        table144->setGeometry(QRect(660, 20, 131, 111));
        table144->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table4.png);"));
        table144->setFrameShape(QFrame::Shape::StyledPanel);
        table144->setFrameShadow(QFrame::Shadow::Raised);
        Table132 = new QFrame(Carre1);
        Table132->setObjectName(QString::fromUtf8("Table132"));
        Table132->setGeometry(QRect(840, 190, 131, 101));
        Table132->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table2.png);"));
        Table132->setFrameShape(QFrame::Shape::StyledPanel);
        Table132->setFrameShadow(QFrame::Shadow::Raised);
        Table122 = new QFrame(Carre1);
        Table122->setObjectName(QString::fromUtf8("Table122"));
        Table122->setGeometry(QRect(500, 60, 131, 101));
        Table122->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table2.png);"));
        Table122->setFrameShape(QFrame::Shape::StyledPanel);
        Table122->setFrameShadow(QFrame::Shadow::Raised);
        table134 = new QFrame(Carre1);
        table134->setObjectName(QString::fromUtf8("table134"));
        table134->setGeometry(QRect(670, 160, 131, 111));
        table134->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table4.png);"));
        table134->setFrameShape(QFrame::Shape::StyledPanel);
        table134->setFrameShadow(QFrame::Shadow::Raised);
        Carre1_2 = new QFrame(centralwidget);
        Carre1_2->setObjectName(QString::fromUtf8("Carre1_2"));
        Carre1_2->setGeometry(QRect(10, 390, 1201, 311));
        Carre1_2->setFrameShape(QFrame::Shape::StyledPanel);
        Carre1_2->setFrameShadow(QFrame::Shadow::Raised);
        Table210 = new QFrame(Carre1_2);
        Table210->setObjectName(QString::fromUtf8("Table210"));
        Table210->setGeometry(QRect(1020, 10, 171, 121));
        Table210->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table10.png);"));
        Table210->setFrameShape(QFrame::Shape::StyledPanel);
        Table210->setFrameShadow(QFrame::Shadow::Raised);
        Table252 = new QFrame(Carre1_2);
        Table252->setObjectName(QString::fromUtf8("Table252"));
        Table252->setGeometry(QRect(1040, 190, 151, 111));
        Table252->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table2.png);"));
        Table252->setFrameShape(QFrame::Shape::StyledPanel);
        Table252->setFrameShadow(QFrame::Shadow::Raised);
        Table242 = new QFrame(Carre1_2);
        Table242->setObjectName(QString::fromUtf8("Table242"));
        Table242->setGeometry(QRect(730, 50, 131, 101));
        Table242->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table2.png);"));
        Table242->setFrameShape(QFrame::Shape::StyledPanel);
        Table242->setFrameShadow(QFrame::Shadow::Raised);
        table254 = new QFrame(Carre1_2);
        table254->setObjectName(QString::fromUtf8("table254"));
        table254->setGeometry(QRect(870, 10, 131, 111));
        table254->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table4.png);"));
        table254->setFrameShape(QFrame::Shape::StyledPanel);
        table254->setFrameShadow(QFrame::Shadow::Raised);
        table228 = new QFrame(Carre1_2);
        table228->setObjectName(QString::fromUtf8("table228"));
        table228->setGeometry(QRect(420, 180, 151, 121));
        table228->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table8.png);"));
        table228->setFrameShape(QFrame::Shape::StyledPanel);
        table228->setFrameShadow(QFrame::Shadow::Raised);
        table216 = new QFrame(Carre1_2);
        table216->setObjectName(QString::fromUtf8("table216"));
        table216->setGeometry(QRect(0, 10, 131, 111));
        table216->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table6.png);"));
        table216->setFrameShape(QFrame::Shape::StyledPanel);
        table216->setFrameShadow(QFrame::Shadow::Raised);
        table226 = new QFrame(Carre1_2);
        table226->setObjectName(QString::fromUtf8("table226"));
        table226->setGeometry(QRect(10, 160, 121, 111));
        table226->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table6.png);"));
        table226->setFrameShape(QFrame::Shape::StyledPanel);
        table226->setFrameShadow(QFrame::Shadow::Raised);
        table214 = new QFrame(Carre1_2);
        table214->setObjectName(QString::fromUtf8("table214"));
        table214->setGeometry(QRect(140, 60, 121, 111));
        table214->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table4.png);"));
        table214->setFrameShape(QFrame::Shape::StyledPanel);
        table214->setFrameShadow(QFrame::Shadow::Raised);
        Table212 = new QFrame(Carre1_2);
        Table212->setObjectName(QString::fromUtf8("Table212"));
        Table212->setGeometry(QRect(160, 200, 121, 101));
        Table212->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table2.png);"));
        Table212->setFrameShape(QFrame::Shape::StyledPanel);
        Table212->setFrameShadow(QFrame::Shadow::Raised);
        table218 = new QFrame(Carre1_2);
        table218->setObjectName(QString::fromUtf8("table218"));
        table218->setGeometry(QRect(280, 0, 141, 111));
        table218->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table8.png);"));
        table218->setFrameShape(QFrame::Shape::StyledPanel);
        table218->setFrameShadow(QFrame::Shadow::Raised);
        table224 = new QFrame(Carre1_2);
        table224->setObjectName(QString::fromUtf8("table224"));
        table224->setGeometry(QRect(270, 150, 141, 111));
        table224->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table4.png);"));
        table224->setFrameShape(QFrame::Shape::StyledPanel);
        table224->setFrameShadow(QFrame::Shadow::Raised);
        table244 = new QFrame(Carre1_2);
        table244->setObjectName(QString::fromUtf8("table244"));
        table244->setGeometry(QRect(570, 10, 141, 101));
        table244->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table4.png);"));
        table244->setFrameShape(QFrame::Shape::StyledPanel);
        table244->setFrameShadow(QFrame::Shadow::Raised);
        Table232 = new QFrame(Carre1_2);
        Table232->setObjectName(QString::fromUtf8("Table232"));
        Table232->setGeometry(QRect(740, 200, 131, 101));
        Table232->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table2.png);"));
        Table232->setFrameShape(QFrame::Shape::StyledPanel);
        Table232->setFrameShadow(QFrame::Shadow::Raised);
        Table222 = new QFrame(Carre1_2);
        Table222->setObjectName(QString::fromUtf8("Table222"));
        Table222->setGeometry(QRect(430, 40, 121, 111));
        Table222->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table2.png);"));
        Table222->setFrameShape(QFrame::Shape::StyledPanel);
        Table222->setFrameShadow(QFrame::Shadow::Raised);
        table234 = new QFrame(Carre1_2);
        table234->setObjectName(QString::fromUtf8("table234"));
        table234->setGeometry(QRect(600, 150, 131, 121));
        table234->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table4.png);"));
        table234->setFrameShape(QFrame::Shape::StyledPanel);
        table234->setFrameShadow(QFrame::Shadow::Raised);
        table238 = new QFrame(Carre1_2);
        table238->setObjectName(QString::fromUtf8("table238"));
        table238->setGeometry(QRect(880, 150, 151, 121));
        table238->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/table8.png);"));
        table238->setFrameShape(QFrame::Shape::StyledPanel);
        table238->setFrameShadow(QFrame::Shadow::Raised);
        comptoir = new QFrame(centralwidget);
        comptoir->setObjectName(QString::fromUtf8("comptoir"));
        comptoir->setGeometry(QRect(1270, 350, 221, 361));
        comptoir->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/comptoir_restaurant.png);\n"
""));
        comptoir->setFrameShape(QFrame::Shape::StyledPanel);
        comptoir->setFrameShadow(QFrame::Shadow::Raised);
        porte_entree = new QFrame(centralwidget);
        porte_entree->setObjectName(QString::fromUtf8("porte_entree"));
        porte_entree->setGeometry(QRect(10, 310, 131, 91));
        porte_entree->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_8_0_MinGW_64_bit-Debug/debug/images/porte.png);"));
        porte_entree->setFrameShape(QFrame::Shape::StyledPanel);
        porte_entree->setFrameShadow(QFrame::Shadow::Raised);
        Salle_restauration->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Salle_restauration);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1492, 22));
        Salle_restauration->setMenuBar(menubar);
        statusbar = new QStatusBar(Salle_restauration);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Salle_restauration->setStatusBar(statusbar);

        retranslateUi(Salle_restauration);

        QMetaObject::connectSlotsByName(Salle_restauration);
    } // setupUi

    void retranslateUi(QMainWindow *Salle_restauration)
    {
        Salle_restauration->setWindowTitle(QCoreApplication::translate("Salle_restauration", "Salle_restauration", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("Salle_restauration", "DASHBOARD", nullptr));
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Salle_restauration: public Ui_Salle_restauration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALLE_RESTAURATION_H
