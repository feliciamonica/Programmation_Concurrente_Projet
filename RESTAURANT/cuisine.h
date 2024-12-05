#ifndef CUISINE_H
#define CUISINE_H

#include <QMainWindow>

namespace Ui {
class Cuisine;
}

class Cuisine : public QMainWindow
{
    Q_OBJECT

public:
    Cuisine(QWidget *parent = nullptr);
    ~Cuisine();

private:
    Ui::Cuisine *ui;
};

#endif // CUISINE_H

