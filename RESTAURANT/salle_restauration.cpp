#include "salle_restauration.h"
#include "ui_salle_restauration.h"

Salle_restauration::Salle_restauration(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Salle_restauration)
{
    ui->setupUi(this);
}

Salle_restauration::~Salle_restauration()
{
    delete ui;
}
