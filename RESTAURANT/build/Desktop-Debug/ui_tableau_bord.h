/********************************************************************************
** Form generated from reading UI file 'tableau_bord.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEAU_BORD_H
#define UI_TABLEAU_BORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tableau_bord
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelDashboardTitle;
    QHBoxLayout *horizontalLayout;
    QFrame *Salle_restauration;
    QVBoxLayout *verticalLayoutSalle;
    QLabel *labelSalleRestauration;
    QGridLayout *gridLayoutSalle;
    QLabel *labelPlacesOccupees;
    QLCDNumber *lcdPlacesOccupees;
    QProgressBar *progressPlacesOccupees;
    QFrame *Stock_plonge;
    QVBoxLayout *verticalLayoutStock;
    QLabel *labelStockPlonge;
    QGridLayout *gridLayoutStock;
    QLabel *labelStockLevel;
    QLCDNumber *lcdStockLevel;
    QFrame *Cuisine;
    QVBoxLayout *verticalLayoutCuisine;
    QLabel *labelCuisine;
    QGridLayout *gridLayoutCuisine;
    QLabel *labelPlatsPrepares;
    QLCDNumber *lcdPlatsPrepares;
    QHBoxLayout *buttonLayout;
    QPushButton *pushButtonExit;

    void setupUi(QMainWindow *Tableau_bord)
    {
        if (Tableau_bord->objectName().isEmpty())
            Tableau_bord->setObjectName(QString::fromUtf8("Tableau_bord"));
        Tableau_bord->resize(1200, 800);
        centralwidget = new QWidget(Tableau_bord);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        labelDashboardTitle = new QLabel(centralwidget);
        labelDashboardTitle->setObjectName(QString::fromUtf8("labelDashboardTitle"));
        labelDashboardTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelDashboardTitle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Salle_restauration = new QFrame(centralwidget);
        Salle_restauration->setObjectName(QString::fromUtf8("Salle_restauration"));
        verticalLayoutSalle = new QVBoxLayout(Salle_restauration);
        verticalLayoutSalle->setObjectName(QString::fromUtf8("verticalLayoutSalle"));
        labelSalleRestauration = new QLabel(Salle_restauration);
        labelSalleRestauration->setObjectName(QString::fromUtf8("labelSalleRestauration"));

        verticalLayoutSalle->addWidget(labelSalleRestauration);

        gridLayoutSalle = new QGridLayout();
        gridLayoutSalle->setObjectName(QString::fromUtf8("gridLayoutSalle"));
        labelPlacesOccupees = new QLabel(Salle_restauration);
        labelPlacesOccupees->setObjectName(QString::fromUtf8("labelPlacesOccupees"));

        gridLayoutSalle->addWidget(labelPlacesOccupees, 0, 0, 1, 1);

        lcdPlacesOccupees = new QLCDNumber(Salle_restauration);
        lcdPlacesOccupees->setObjectName(QString::fromUtf8("lcdPlacesOccupees"));

        gridLayoutSalle->addWidget(lcdPlacesOccupees, 0, 1, 1, 1);

        progressPlacesOccupees = new QProgressBar(Salle_restauration);
        progressPlacesOccupees->setObjectName(QString::fromUtf8("progressPlacesOccupees"));
        progressPlacesOccupees->setValue(50);

        gridLayoutSalle->addWidget(progressPlacesOccupees, 1, 0, 1, 2);


        verticalLayoutSalle->addLayout(gridLayoutSalle);


        horizontalLayout->addWidget(Salle_restauration);

        Stock_plonge = new QFrame(centralwidget);
        Stock_plonge->setObjectName(QString::fromUtf8("Stock_plonge"));
        verticalLayoutStock = new QVBoxLayout(Stock_plonge);
        verticalLayoutStock->setObjectName(QString::fromUtf8("verticalLayoutStock"));
        labelStockPlonge = new QLabel(Stock_plonge);
        labelStockPlonge->setObjectName(QString::fromUtf8("labelStockPlonge"));

        verticalLayoutStock->addWidget(labelStockPlonge);

        gridLayoutStock = new QGridLayout();
        gridLayoutStock->setObjectName(QString::fromUtf8("gridLayoutStock"));
        labelStockLevel = new QLabel(Stock_plonge);
        labelStockLevel->setObjectName(QString::fromUtf8("labelStockLevel"));

        gridLayoutStock->addWidget(labelStockLevel, 0, 0, 1, 1);

        lcdStockLevel = new QLCDNumber(Stock_plonge);
        lcdStockLevel->setObjectName(QString::fromUtf8("lcdStockLevel"));

        gridLayoutStock->addWidget(lcdStockLevel, 0, 1, 1, 1);


        verticalLayoutStock->addLayout(gridLayoutStock);


        horizontalLayout->addWidget(Stock_plonge);

        Cuisine = new QFrame(centralwidget);
        Cuisine->setObjectName(QString::fromUtf8("Cuisine"));
        verticalLayoutCuisine = new QVBoxLayout(Cuisine);
        verticalLayoutCuisine->setObjectName(QString::fromUtf8("verticalLayoutCuisine"));
        labelCuisine = new QLabel(Cuisine);
        labelCuisine->setObjectName(QString::fromUtf8("labelCuisine"));

        verticalLayoutCuisine->addWidget(labelCuisine);

        gridLayoutCuisine = new QGridLayout();
        gridLayoutCuisine->setObjectName(QString::fromUtf8("gridLayoutCuisine"));
        labelPlatsPrepares = new QLabel(Cuisine);
        labelPlatsPrepares->setObjectName(QString::fromUtf8("labelPlatsPrepares"));

        gridLayoutCuisine->addWidget(labelPlatsPrepares, 0, 0, 1, 1);

        lcdPlatsPrepares = new QLCDNumber(Cuisine);
        lcdPlatsPrepares->setObjectName(QString::fromUtf8("lcdPlatsPrepares"));

        gridLayoutCuisine->addWidget(lcdPlatsPrepares, 0, 1, 1, 1);


        verticalLayoutCuisine->addLayout(gridLayoutCuisine);


        horizontalLayout->addWidget(Cuisine);


        verticalLayout->addLayout(horizontalLayout);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        pushButtonExit = new QPushButton(centralwidget);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));
        pushButtonExit->setMinimumSize(QSize(180, 50));

        buttonLayout->addWidget(pushButtonExit);


        verticalLayout->addLayout(buttonLayout);

        Tableau_bord->setCentralWidget(centralwidget);

        retranslateUi(Tableau_bord);

        QMetaObject::connectSlotsByName(Tableau_bord);
    } // setupUi

    void retranslateUi(QMainWindow *Tableau_bord)
    {
        Tableau_bord->setWindowTitle(QCoreApplication::translate("Tableau_bord", "Restaurant Manager Pro - Tableau de Bord", nullptr));
        labelDashboardTitle->setText(QCoreApplication::translate("Tableau_bord", "\360\237\217\252 Tableau de Bord - Restaurant", nullptr));
        labelDashboardTitle->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"        font-size: 24px;\n"
"        color: #37474f;\n"
"        font-weight: bold;\n"
"        padding: 20px;\n"
"        background-color: white;\n"
"        border-radius: 12px;\n"
"        margin-bottom: 10px;\n"
"       ", nullptr));
        Salle_restauration->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"          QFrame {\n"
"              background-color: #e3f2fd;\n"
"              border-radius: 12px;\n"
"              padding: 15px;\n"
"          }\n"
"         ", nullptr));
        labelSalleRestauration->setText(QCoreApplication::translate("Tableau_bord", "\360\237\215\275\357\270\217 Salle de Restauration", nullptr));
        labelSalleRestauration->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"             font-size: 18px;\n"
"             font-weight: bold;\n"
"             color: #1565c0;\n"
"             margin-bottom: 10px;\n"
"            ", nullptr));
        labelPlacesOccupees->setText(QCoreApplication::translate("Tableau_bord", "Places Occup\303\251es :", nullptr));
        lcdPlacesOccupees->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"               background-color: #1565c0;\n"
"               color: white;\n"
"               border-radius: 6px;\n"
"              ", nullptr));
        Stock_plonge->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"          QFrame {\n"
"              background-color: #e8f5e9;\n"
"              border-radius: 12px;\n"
"              padding: 15px;\n"
"          }\n"
"         ", nullptr));
        labelStockPlonge->setText(QCoreApplication::translate("Tableau_bord", "\360\237\247\274 Stock Plonge", nullptr));
        labelStockPlonge->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"             font-size: 18px;\n"
"             font-weight: bold;\n"
"             color: #2e7d32;\n"
"             margin-bottom: 10px;\n"
"            ", nullptr));
        labelStockLevel->setText(QCoreApplication::translate("Tableau_bord", "Stock Total :", nullptr));
        lcdStockLevel->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"               background-color: #2e7d32;\n"
"               color: white;\n"
"               border-radius: 6px;\n"
"              ", nullptr));
        Cuisine->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"          QFrame {\n"
"              background-color: #fff3e0;\n"
"              border-radius: 12px;\n"
"              padding: 15px;\n"
"          }\n"
"         ", nullptr));
        labelCuisine->setText(QCoreApplication::translate("Tableau_bord", "\360\237\221\250\342\200\215\360\237\215\263 Cuisine", nullptr));
        labelCuisine->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"             font-size: 18px;\n"
"             font-weight: bold;\n"
"             color: #f57c00;\n"
"             margin-bottom: 10px;\n"
"            ", nullptr));
        labelPlatsPrepares->setText(QCoreApplication::translate("Tableau_bord", "Plats Pr\303\251par\303\251s :", nullptr));
        lcdPlatsPrepares->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"               background-color: #f57c00;\n"
"               color: white;\n"
"               border-radius: 6px;\n"
"              ", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("Tableau_bord", "\360\237\232\252 SORTIE", nullptr));
        pushButtonExit->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"          QPushButton {\n"
"              background-color: #d32f2f;\n"
"              color: white;\n"
"              border-radius: 8px;\n"
"              padding: 10px;\n"
"          }\n"
"          QPushButton:hover {\n"
"              background-color: #b71c1c;\n"
"          }\n"
"         ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tableau_bord: public Ui_Tableau_bord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEAU_BORD_H
