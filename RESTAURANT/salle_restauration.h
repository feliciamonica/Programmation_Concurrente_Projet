#ifndef SALLE_RESTAURATION_H
#define SALLE_RESTAURATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Salle_restauration;
}
QT_END_NAMESPACE

class Salle_restauration : public QMainWindow
{
    Q_OBJECT

public:
    Salle_restauration(QWidget *parent = nullptr);
    ~Salle_restauration();

private:
    Ui::Salle_restauration *ui;
};
#endif // SALLE_RESTAURATION_H
