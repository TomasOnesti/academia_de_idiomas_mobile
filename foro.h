#ifndef FORO_H
#define FORO_H

#include <QWidget>

namespace Ui {
class Foro;
}

class Foro : public QWidget
{
    Q_OBJECT

public:
    explicit Foro(QWidget *parent = nullptr);
    ~Foro();

private:
    Ui::Foro *ui;
};

#endif // FORO_H
