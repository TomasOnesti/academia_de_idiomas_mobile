#ifndef LOGINNN_H
#define LOGINNN_H

#include <QWidget>

namespace Ui {
class Loginnn;
}

class Loginnn : public QWidget
{
    Q_OBJECT

public:
    explicit Loginnn(QWidget *parent = nullptr);
    ~Loginnn();

private:slots
    void button();
    Ui::Loginnn *ui;
};

#endif // LOGINNN_H


