#include "perfil.h"
#include "ui_perfil.h"

perfil::perfil(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::perfil)
{
    ui->setupUi(this);
}

perfil::~perfil()
{
    delete ui;
}
