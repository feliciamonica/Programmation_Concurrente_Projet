#include "cuisine.h"
#include "ui_cuisine.h"

Cuisine::Cuisine(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cuisine)
{
    ui->setupUi(this);
    setWindowTitle("Cuisine");
}

Cuisine::~Cuisine()
{
    delete ui;
}
