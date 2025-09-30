#include "banderin_alumno.h"
#include "ui_banderin_alumno.h"

banderin_alumno::banderin_alumno(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::banderin_alumno)
{
    ui->setupUi(this);
}

banderin_alumno::~banderin_alumno()
{
    delete ui;
}
