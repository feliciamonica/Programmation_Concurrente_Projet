/********************************************************************************
** Form generated from reading UI file 'salle_restauration.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALLE_RESTAURATION_H
#define UI_SALLE_RESTAURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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
    QFrame *Carre1;
    QFrame *Carre2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTimeEdit *timeEdit;
    QPushButton *pushButton_5;
    QFrame *Porte;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Salle_restauration)
    {
        if (Salle_restauration->objectName().isEmpty())
            Salle_restauration->setObjectName("Salle_restauration");
        Salle_restauration->resize(1491, 715);
        centralwidget = new QWidget(Salle_restauration);
        centralwidget->setObjectName("centralwidget");
        Carre1 = new QFrame(centralwidget);
        Carre1->setObjectName("Carre1");
        Carre1->setGeometry(QRect(100, 70, 1351, 251));
        Carre1->setFrameShape(QFrame::Shape::StyledPanel);
        Carre1->setFrameShadow(QFrame::Shadow::Raised);
        Carre2 = new QFrame(centralwidget);
        Carre2->setObjectName("Carre2");
        Carre2->setGeometry(QRect(100, 380, 1351, 271));
        Carre2->setFrameShape(QFrame::Shape::StyledPanel);
        Carre2->setFrameShadow(QFrame::Shadow::Raised);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 20, 83, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 20, 83, 29));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(290, 20, 81, 31));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(400, 10, 111, 41));
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(700, 20, 51, 29));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(190, 20, 81, 31));
        Porte = new QFrame(centralwidget);
        Porte->setObjectName("Porte");
        Porte->setGeometry(QRect(0, 310, 61, 80));
        Porte->setFrameShape(QFrame::Shape::StyledPanel);
        Porte->setFrameShadow(QFrame::Shadow::Raised);
        Salle_restauration->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Salle_restauration);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1491, 25));
        Salle_restauration->setMenuBar(menubar);
        statusbar = new QStatusBar(Salle_restauration);
        statusbar->setObjectName("statusbar");
        Salle_restauration->setStatusBar(statusbar);

        retranslateUi(Salle_restauration);

        QMetaObject::connectSlotsByName(Salle_restauration);
    } // setupUi

    void retranslateUi(QMainWindow *Salle_restauration)
    {
        Salle_restauration->setWindowTitle(QCoreApplication::translate("Salle_restauration", "Salle_restauration", nullptr));
        pushButton->setText(QCoreApplication::translate("Salle_restauration", "PAUSE", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Salle_restauration", "START", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Salle_restauration", "STOP", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Salle_restauration", "DASHBOARD", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Salle_restauration", "ACCELERER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Salle_restauration: public Ui_Salle_restauration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALLE_RESTAURATION_H
