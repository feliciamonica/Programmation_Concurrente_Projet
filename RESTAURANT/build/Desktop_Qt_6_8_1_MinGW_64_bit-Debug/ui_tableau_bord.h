/********************************************************************************
** Form generated from reading UI file 'tableau_bord.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEAU_BORD_H
#define UI_TABLEAU_BORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tableau_bord
{
public:
    QWidget *centralwidget;
    QFrame *Salle_restauration;
    QFrame *Nmbre_place_occupee;
    QFrame *Nmbre_plat_servi;
    QFrame *Nmbre_boisson;
    QFrame *Stock_plonge;
    QFrame *Ustensile_pret;
    QFrame *ustensile_sales;
    QFrame *Cuisine;
    QFrame *Stock_reserve;
    QFrame *Stock_chambrefroide;
    QFrame *Stock_congelateur;
    QFrame *Nmbre_de_plat_cuisine;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tableau_bord)
    {
        if (Tableau_bord->objectName().isEmpty())
            Tableau_bord->setObjectName("Tableau_bord");
        Tableau_bord->resize(804, 606);
        centralwidget = new QWidget(Tableau_bord);
        centralwidget->setObjectName("centralwidget");
        Salle_restauration = new QFrame(centralwidget);
        Salle_restauration->setObjectName("Salle_restauration");
        Salle_restauration->setGeometry(QRect(10, 20, 241, 311));
        Salle_restauration->setFrameShape(QFrame::Shape::StyledPanel);
        Salle_restauration->setFrameShadow(QFrame::Shadow::Raised);
        Nmbre_place_occupee = new QFrame(Salle_restauration);
        Nmbre_place_occupee->setObjectName("Nmbre_place_occupee");
        Nmbre_place_occupee->setGeometry(QRect(10, 10, 221, 71));
        Nmbre_place_occupee->setFrameShape(QFrame::Shape::StyledPanel);
        Nmbre_place_occupee->setFrameShadow(QFrame::Shadow::Raised);
        Nmbre_plat_servi = new QFrame(Salle_restauration);
        Nmbre_plat_servi->setObjectName("Nmbre_plat_servi");
        Nmbre_plat_servi->setGeometry(QRect(10, 90, 221, 71));
        Nmbre_plat_servi->setFrameShape(QFrame::Shape::StyledPanel);
        Nmbre_plat_servi->setFrameShadow(QFrame::Shadow::Raised);
        Nmbre_boisson = new QFrame(Salle_restauration);
        Nmbre_boisson->setObjectName("Nmbre_boisson");
        Nmbre_boisson->setGeometry(QRect(10, 170, 221, 71));
        Nmbre_boisson->setFrameShape(QFrame::Shape::StyledPanel);
        Nmbre_boisson->setFrameShadow(QFrame::Shadow::Raised);
        Stock_plonge = new QFrame(centralwidget);
        Stock_plonge->setObjectName("Stock_plonge");
        Stock_plonge->setGeometry(QRect(280, 320, 231, 211));
        Stock_plonge->setFrameShape(QFrame::Shape::StyledPanel);
        Stock_plonge->setFrameShadow(QFrame::Shadow::Raised);
        Ustensile_pret = new QFrame(Stock_plonge);
        Ustensile_pret->setObjectName("Ustensile_pret");
        Ustensile_pret->setGeometry(QRect(20, 20, 191, 81));
        Ustensile_pret->setFrameShape(QFrame::Shape::StyledPanel);
        Ustensile_pret->setFrameShadow(QFrame::Shadow::Raised);
        ustensile_sales = new QFrame(Stock_plonge);
        ustensile_sales->setObjectName("ustensile_sales");
        ustensile_sales->setGeometry(QRect(20, 120, 191, 71));
        ustensile_sales->setFrameShape(QFrame::Shape::StyledPanel);
        ustensile_sales->setFrameShadow(QFrame::Shadow::Raised);
        Cuisine = new QFrame(centralwidget);
        Cuisine->setObjectName("Cuisine");
        Cuisine->setGeometry(QRect(540, 80, 231, 321));
        Cuisine->setFrameShape(QFrame::Shape::StyledPanel);
        Cuisine->setFrameShadow(QFrame::Shadow::Raised);
        Stock_reserve = new QFrame(Cuisine);
        Stock_reserve->setObjectName("Stock_reserve");
        Stock_reserve->setGeometry(QRect(10, 10, 211, 71));
        Stock_reserve->setFrameShape(QFrame::Shape::StyledPanel);
        Stock_reserve->setFrameShadow(QFrame::Shadow::Raised);
        Stock_chambrefroide = new QFrame(Cuisine);
        Stock_chambrefroide->setObjectName("Stock_chambrefroide");
        Stock_chambrefroide->setGeometry(QRect(10, 90, 211, 71));
        Stock_chambrefroide->setFrameShape(QFrame::Shape::StyledPanel);
        Stock_chambrefroide->setFrameShadow(QFrame::Shadow::Raised);
        Stock_congelateur = new QFrame(Cuisine);
        Stock_congelateur->setObjectName("Stock_congelateur");
        Stock_congelateur->setGeometry(QRect(10, 170, 211, 71));
        Stock_congelateur->setFrameShape(QFrame::Shape::StyledPanel);
        Stock_congelateur->setFrameShadow(QFrame::Shadow::Raised);
        Nmbre_de_plat_cuisine = new QFrame(Cuisine);
        Nmbre_de_plat_cuisine->setObjectName("Nmbre_de_plat_cuisine");
        Nmbre_de_plat_cuisine->setGeometry(QRect(10, 250, 211, 61));
        Nmbre_de_plat_cuisine->setFrameShape(QFrame::Shape::StyledPanel);
        Nmbre_de_plat_cuisine->setFrameShadow(QFrame::Shadow::Raised);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(690, 20, 83, 29));
        Tableau_bord->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tableau_bord);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 804, 22));
        Tableau_bord->setMenuBar(menubar);
        statusbar = new QStatusBar(Tableau_bord);
        statusbar->setObjectName("statusbar");
        Tableau_bord->setStatusBar(statusbar);

        retranslateUi(Tableau_bord);

        QMetaObject::connectSlotsByName(Tableau_bord);
    } // setupUi

    void retranslateUi(QMainWindow *Tableau_bord)
    {
        Tableau_bord->setWindowTitle(QCoreApplication::translate("Tableau_bord", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Tableau_bord", "SORTIE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tableau_bord: public Ui_Tableau_bord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEAU_BORD_H
