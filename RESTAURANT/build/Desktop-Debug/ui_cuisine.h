/********************************************************************************
** Form generated from reading UI file 'cuisine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUISINE_H
#define UI_CUISINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cuisine
{
public:
    QWidget *centralwidget;
    QFrame *Congelateur;
    QFrame *Chambrefroide;
    QFrame *Reserve;
    QFrame *EspacePlonge;
    QFrame *Espace_travail;
    QFrame *Cuisiniere_et_four;
    QFrame *Comptoir_chef;
    QFrame *Comptoir_Plonge;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cuisine)
    {
        if (Cuisine->objectName().isEmpty())
            Cuisine->setObjectName(QString::fromUtf8("Cuisine"));
        Cuisine->resize(1498, 715);
        centralwidget = new QWidget(Cuisine);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Congelateur = new QFrame(centralwidget);
        Congelateur->setObjectName(QString::fromUtf8("Congelateur"));
        Congelateur->setGeometry(QRect(950, 560, 211, 91));
        Congelateur->setFrameShape(QFrame::Shape::StyledPanel);
        Congelateur->setFrameShadow(QFrame::Shadow::Raised);
        Chambrefroide = new QFrame(centralwidget);
        Chambrefroide->setObjectName(QString::fromUtf8("Chambrefroide"));
        Chambrefroide->setGeometry(QRect(1300, 490, 151, 161));
        Chambrefroide->setFrameShape(QFrame::Shape::StyledPanel);
        Chambrefroide->setFrameShadow(QFrame::Shadow::Raised);
        Reserve = new QFrame(centralwidget);
        Reserve->setObjectName(QString::fromUtf8("Reserve"));
        Reserve->setGeometry(QRect(1280, 130, 181, 201));
        Reserve->setFrameShape(QFrame::Shape::StyledPanel);
        Reserve->setFrameShadow(QFrame::Shadow::Raised);
        EspacePlonge = new QFrame(centralwidget);
        EspacePlonge->setObjectName(QString::fromUtf8("EspacePlonge"));
        EspacePlonge->setGeometry(QRect(270, 549, 491, 91));
        EspacePlonge->setFrameShape(QFrame::Shape::StyledPanel);
        EspacePlonge->setFrameShadow(QFrame::Shadow::Raised);
        Espace_travail = new QFrame(centralwidget);
        Espace_travail->setObjectName(QString::fromUtf8("Espace_travail"));
        Espace_travail->setGeometry(QRect(420, 270, 581, 151));
        Espace_travail->setFrameShape(QFrame::Shape::StyledPanel);
        Espace_travail->setFrameShadow(QFrame::Shadow::Raised);
        Cuisiniere_et_four = new QFrame(centralwidget);
        Cuisiniere_et_four->setObjectName(QString::fromUtf8("Cuisiniere_et_four"));
        Cuisiniere_et_four->setGeometry(QRect(310, 40, 811, 101));
        Cuisiniere_et_four->setFrameShape(QFrame::Shape::StyledPanel);
        Cuisiniere_et_four->setFrameShadow(QFrame::Shadow::Raised);
        Comptoir_chef = new QFrame(centralwidget);
        Comptoir_chef->setObjectName(QString::fromUtf8("Comptoir_chef"));
        Comptoir_chef->setGeometry(QRect(10, 20, 81, 181));
        Comptoir_chef->setFrameShape(QFrame::Shape::StyledPanel);
        Comptoir_chef->setFrameShadow(QFrame::Shadow::Raised);
        Comptoir_Plonge = new QFrame(centralwidget);
        Comptoir_Plonge->setObjectName(QString::fromUtf8("Comptoir_Plonge"));
        Comptoir_Plonge->setGeometry(QRect(10, 430, 81, 211));
        Comptoir_Plonge->setFrameShape(QFrame::Shape::StyledPanel);
        Comptoir_Plonge->setFrameShadow(QFrame::Shadow::Raised);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1320, 10, 101, 41));
        Cuisine->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cuisine);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1498, 25));
        Cuisine->setMenuBar(menubar);
        statusbar = new QStatusBar(Cuisine);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Cuisine->setStatusBar(statusbar);

        retranslateUi(Cuisine);

        QMetaObject::connectSlotsByName(Cuisine);
    } // setupUi

    void retranslateUi(QMainWindow *Cuisine)
    {
        Cuisine->setWindowTitle(QCoreApplication::translate("Cuisine", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Cuisine", "Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cuisine: public Ui_Cuisine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUISINE_H
