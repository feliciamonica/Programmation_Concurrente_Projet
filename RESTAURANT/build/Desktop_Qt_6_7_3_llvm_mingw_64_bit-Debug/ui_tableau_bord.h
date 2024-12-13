/********************************************************************************
** Form generated from reading UI file 'tableau_bord.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
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
    QHBoxLayout *horizontalLayoutMain;
    QFrame *Salle_restauration;
    QVBoxLayout *verticalLayoutSalle;
    QLabel *labelSalleRestauration;
    QGridLayout *gridLayoutSalle;
    QLabel *labelPlacesOccupees;
    QLCDNumber *lcdPlacesOccupees;
    QProgressBar *progressPlacesOccupees;
    QFrame *Stock;
    QVBoxLayout *verticalLayoutStock;
    QLabel *labelStock;
    QGridLayout *gridLayoutStock;
    QLabel *labelStockLevel;
    QLCDNumber *lcdStockLevel;
    QFrame *Employes;
    QVBoxLayout *verticalLayoutEmployes;
    QLabel *labelEmployes;
    QGridLayout *gridLayoutEmployes;
    QLabel *labelEmployeCount;
    QLCDNumber *lcdEmployeCount;
    QFrame *Clients;
    QVBoxLayout *verticalLayoutClients;
    QLabel *labelClients;
    QGridLayout *gridLayoutClients;
    QLabel *labelClientCount;
    QLCDNumber *lcdClientCount;
    QHBoxLayout *horizontalLayoutPlat;
    QFrame *Plats_prepares;
    QVBoxLayout *verticalLayoutPlats;
    QLabel *labelPlatsPrepares;
    QGridLayout *gridLayoutPlats;
    QLabel *labelPlatsPrepares1;
    QLCDNumber *lcdPlatsPrepares;
    QHBoxLayout *buttonLayout;
    QPushButton *pushButtonExit;

    void setupUi(QMainWindow *Tableau_bord)
    {
        if (Tableau_bord->objectName().isEmpty())
            Tableau_bord->setObjectName("Tableau_bord");
        Tableau_bord->resize(1200, 800);
        centralwidget = new QWidget(Tableau_bord);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        labelDashboardTitle = new QLabel(centralwidget);
        labelDashboardTitle->setObjectName("labelDashboardTitle");
        labelDashboardTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelDashboardTitle);

        horizontalLayoutMain = new QHBoxLayout();
        horizontalLayoutMain->setObjectName("horizontalLayoutMain");
        Salle_restauration = new QFrame(centralwidget);
        Salle_restauration->setObjectName("Salle_restauration");
        verticalLayoutSalle = new QVBoxLayout(Salle_restauration);
        verticalLayoutSalle->setObjectName("verticalLayoutSalle");
        labelSalleRestauration = new QLabel(Salle_restauration);
        labelSalleRestauration->setObjectName("labelSalleRestauration");

        verticalLayoutSalle->addWidget(labelSalleRestauration);

        gridLayoutSalle = new QGridLayout();
        gridLayoutSalle->setObjectName("gridLayoutSalle");
        labelPlacesOccupees = new QLabel(Salle_restauration);
        labelPlacesOccupees->setObjectName("labelPlacesOccupees");

        gridLayoutSalle->addWidget(labelPlacesOccupees, 0, 0, 1, 1);

        lcdPlacesOccupees = new QLCDNumber(Salle_restauration);
        lcdPlacesOccupees->setObjectName("lcdPlacesOccupees");

        gridLayoutSalle->addWidget(lcdPlacesOccupees, 0, 1, 1, 1);

        progressPlacesOccupees = new QProgressBar(Salle_restauration);
        progressPlacesOccupees->setObjectName("progressPlacesOccupees");
        progressPlacesOccupees->setValue(50);

        gridLayoutSalle->addWidget(progressPlacesOccupees, 1, 0, 1, 2);


        verticalLayoutSalle->addLayout(gridLayoutSalle);


        horizontalLayoutMain->addWidget(Salle_restauration);

        Stock = new QFrame(centralwidget);
        Stock->setObjectName("Stock");
        verticalLayoutStock = new QVBoxLayout(Stock);
        verticalLayoutStock->setObjectName("verticalLayoutStock");
        labelStock = new QLabel(Stock);
        labelStock->setObjectName("labelStock");

        verticalLayoutStock->addWidget(labelStock);

        gridLayoutStock = new QGridLayout();
        gridLayoutStock->setObjectName("gridLayoutStock");
        labelStockLevel = new QLabel(Stock);
        labelStockLevel->setObjectName("labelStockLevel");

        gridLayoutStock->addWidget(labelStockLevel, 0, 0, 1, 1);

        lcdStockLevel = new QLCDNumber(Stock);
        lcdStockLevel->setObjectName("lcdStockLevel");

        gridLayoutStock->addWidget(lcdStockLevel, 0, 1, 1, 1);


        verticalLayoutStock->addLayout(gridLayoutStock);


        horizontalLayoutMain->addWidget(Stock);

        Employes = new QFrame(centralwidget);
        Employes->setObjectName("Employes");
        verticalLayoutEmployes = new QVBoxLayout(Employes);
        verticalLayoutEmployes->setObjectName("verticalLayoutEmployes");
        labelEmployes = new QLabel(Employes);
        labelEmployes->setObjectName("labelEmployes");

        verticalLayoutEmployes->addWidget(labelEmployes);

        gridLayoutEmployes = new QGridLayout();
        gridLayoutEmployes->setObjectName("gridLayoutEmployes");
        labelEmployeCount = new QLabel(Employes);
        labelEmployeCount->setObjectName("labelEmployeCount");

        gridLayoutEmployes->addWidget(labelEmployeCount, 0, 0, 1, 1);

        lcdEmployeCount = new QLCDNumber(Employes);
        lcdEmployeCount->setObjectName("lcdEmployeCount");

        gridLayoutEmployes->addWidget(lcdEmployeCount, 0, 1, 1, 1);


        verticalLayoutEmployes->addLayout(gridLayoutEmployes);


        horizontalLayoutMain->addWidget(Employes);

        Clients = new QFrame(centralwidget);
        Clients->setObjectName("Clients");
        verticalLayoutClients = new QVBoxLayout(Clients);
        verticalLayoutClients->setObjectName("verticalLayoutClients");
        labelClients = new QLabel(Clients);
        labelClients->setObjectName("labelClients");

        verticalLayoutClients->addWidget(labelClients);

        gridLayoutClients = new QGridLayout();
        gridLayoutClients->setObjectName("gridLayoutClients");
        labelClientCount = new QLabel(Clients);
        labelClientCount->setObjectName("labelClientCount");

        gridLayoutClients->addWidget(labelClientCount, 0, 0, 1, 1);

        lcdClientCount = new QLCDNumber(Clients);
        lcdClientCount->setObjectName("lcdClientCount");

        gridLayoutClients->addWidget(lcdClientCount, 0, 1, 1, 1);


        verticalLayoutClients->addLayout(gridLayoutClients);


        horizontalLayoutMain->addWidget(Clients);


        verticalLayout->addLayout(horizontalLayoutMain);

        horizontalLayoutPlat = new QHBoxLayout();
        horizontalLayoutPlat->setObjectName("horizontalLayoutPlat");
        Plats_prepares = new QFrame(centralwidget);
        Plats_prepares->setObjectName("Plats_prepares");
        verticalLayoutPlats = new QVBoxLayout(Plats_prepares);
        verticalLayoutPlats->setObjectName("verticalLayoutPlats");
        labelPlatsPrepares = new QLabel(Plats_prepares);
        labelPlatsPrepares->setObjectName("labelPlatsPrepares");

        verticalLayoutPlats->addWidget(labelPlatsPrepares);

        gridLayoutPlats = new QGridLayout();
        gridLayoutPlats->setObjectName("gridLayoutPlats");
        labelPlatsPrepares1 = new QLabel(Plats_prepares);
        labelPlatsPrepares1->setObjectName("labelPlatsPrepares1");

        gridLayoutPlats->addWidget(labelPlatsPrepares1, 0, 0, 1, 1);

        lcdPlatsPrepares = new QLCDNumber(Plats_prepares);
        lcdPlatsPrepares->setObjectName("lcdPlatsPrepares");

        gridLayoutPlats->addWidget(lcdPlatsPrepares, 0, 1, 1, 1);


        verticalLayoutPlats->addLayout(gridLayoutPlats);


        horizontalLayoutPlat->addWidget(Plats_prepares);


        verticalLayout->addLayout(horizontalLayoutPlat);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        pushButtonExit = new QPushButton(centralwidget);
        pushButtonExit->setObjectName("pushButtonExit");
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
        labelDashboardTitle->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"        font-size: 24px;\n"
"        color: #37474f;\n"
"        font-weight: bold;\n"
"        padding: 20px;\n"
"        background-color: white;\n"
"        border-radius: 12px;\n"
"        margin-bottom: 10px;\n"
"       ", nullptr));
        labelDashboardTitle->setText(QCoreApplication::translate("Tableau_bord", "\360\237\217\252 Tableau de Bord - Restaurant", nullptr));
        Salle_restauration->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"          QFrame {\n"
"              background-color: #e3f2fd;\n"
"              border-radius: 12px;\n"
"              padding: 15px;\n"
"          }\n"
"         ", nullptr));
        labelSalleRestauration->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"             font-size: 18px;\n"
"             font-weight: bold;\n"
"             color: #1565c0;\n"
"             margin-bottom: 10px;\n"
"            ", nullptr));
        labelSalleRestauration->setText(QCoreApplication::translate("Tableau_bord", "\360\237\215\275\357\270\217 Salle de Restauration", nullptr));
        labelPlacesOccupees->setText(QCoreApplication::translate("Tableau_bord", "Places Occup\303\251es :", nullptr));
        lcdPlacesOccupees->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"               background-color: #1565c0;\n"
"               color: white;\n"
"               border-radius: 6px;\n"
"              ", nullptr));
        Stock->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"          QFrame {\n"
"              background-color: #e8f5e9;\n"
"              border-radius: 12px;\n"
"              padding: 15px;\n"
"          }\n"
"         ", nullptr));
        labelStock->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"             font-size: 18px;\n"
"             font-weight: bold;\n"
"             color: #2e7d32;\n"
"             margin-bottom: 10px;\n"
"            ", nullptr));
        labelStock->setText(QCoreApplication::translate("Tableau_bord", "\360\237\247\274 Stock", nullptr));
        labelStockLevel->setText(QCoreApplication::translate("Tableau_bord", "Stock Total :", nullptr));
        lcdStockLevel->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"               background-color: #2e7d32;\n"
"               color: white;\n"
"               border-radius: 6px;\n"
"              ", nullptr));
        Employes->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"          QFrame {\n"
"              background-color: #e8f5e9;\n"
"              border-radius: 12px;\n"
"              padding: 15px;\n"
"          }\n"
"         ", nullptr));
        labelEmployes->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"             font-size: 18px;\n"
"             font-weight: bold;\n"
"             color: #2e7d32;\n"
"             margin-bottom: 10px;\n"
"            ", nullptr));
        labelEmployes->setText(QCoreApplication::translate("Tableau_bord", "\360\237\221\245 Employ\303\251s", nullptr));
        labelEmployeCount->setText(QCoreApplication::translate("Tableau_bord", "Total Employ\303\251s :", nullptr));
        lcdEmployeCount->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"               background-color: #2e7d32;\n"
"               color: white;\n"
"               border-radius: 6px;\n"
"              ", nullptr));
        Clients->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"          QFrame {\n"
"              background-color: #fff3e0;\n"
"              border-radius: 12px;\n"
"              padding: 15px;\n"
"          }\n"
"         ", nullptr));
        labelClients->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"             font-size: 18px;\n"
"             font-weight: bold;\n"
"             color: #f57c00;\n"
"             margin-bottom: 10px;\n"
"            ", nullptr));
        labelClients->setText(QCoreApplication::translate("Tableau_bord", "\360\237\221\250\342\200\215\360\237\215\263 Clients", nullptr));
        labelClientCount->setText(QCoreApplication::translate("Tableau_bord", "Total Clients :", nullptr));
        lcdClientCount->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"               background-color: #f57c00;\n"
"               color: white;\n"
"               border-radius: 6px;\n"
"              ", nullptr));
        Plats_prepares->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"          QFrame {\n"
"              background-color: #fff3e0;\n"
"              border-radius: 12px;\n"
"              padding: 15px;\n"
"          }\n"
"         ", nullptr));
        labelPlatsPrepares->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"             font-size: 18px;\n"
"             font-weight: bold;\n"
"             color: #f57c00;\n"
"             margin-bottom: 10px;\n"
"            ", nullptr));
        labelPlatsPrepares->setText(QCoreApplication::translate("Tableau_bord", "\360\237\215\263 Plats Pr\303\251par\303\251s", nullptr));
        labelPlatsPrepares1->setText(QCoreApplication::translate("Tableau_bord", "Plats Pr\303\251par\303\251s :", nullptr));
        lcdPlatsPrepares->setStyleSheet(QCoreApplication::translate("Tableau_bord", "\n"
"               background-color: #f57c00;\n"
"               color: white;\n"
"               border-radius: 6px;\n"
"              ", nullptr));
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
        pushButtonExit->setText(QCoreApplication::translate("Tableau_bord", "\360\237\232\252 SORTIE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tableau_bord: public Ui_Tableau_bord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEAU_BORD_H
