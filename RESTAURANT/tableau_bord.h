#ifndef TABLEAU_BORD_H
#define TABLEAU_BORD_H

#include <QMainWindow>

namespace Ui {
class Tableau_bord;
}

class Tableau_bord : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tableau_bord(QWidget *parent = nullptr);
    ~Tableau_bord();

private:
    Ui::Tableau_bord *ui;
};

#endif // TABLEAU_BORD_H
