#include "tableau_bord.h"
#include "ui_tableau_bord.h"

Tableau_bord::Tableau_bord(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Tableau_bord)
{
    ui->setupUi(this);
}

Tableau_bord::~Tableau_bord()
{
    delete ui;
}
