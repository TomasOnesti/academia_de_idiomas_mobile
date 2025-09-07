#ifndef PERFIL_H
#define PERFIL_H

#include <QMainWindow>

namespace Ui {
class perfil;
}

class perfil : public QMainWindow
{
    Q_OBJECT

public:
    explicit perfil(QWidget *parent = nullptr);
    ~perfil();

private:
    Ui::perfil *ui;
};

#endif // PERFIL_H
