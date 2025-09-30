#ifndef BANDERIN_ALUMNO_H
#define BANDERIN_ALUMNO_H

#include <QFrame>

namespace Ui {
class banderin_alumno;
}

class banderin_alumno : public QFrame
{
    Q_OBJECT

public:
    explicit banderin_alumno(QWidget *parent = nullptr);
    ~banderin_alumno();

private:
    Ui::banderin_alumno *ui;
};

#endif // BANDERIN_ALUMNO_H
