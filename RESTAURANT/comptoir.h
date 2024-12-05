#ifndef COMPTOIR_H
#define COMPTOIR_H

#include <QWidget>
#include <QPainter>

class Comptoir : public QWidget {
    Q_OBJECT

public:
    explicit Comptoir(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // COMPTOIR_H
