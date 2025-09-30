#include "foro.h"
#include "ui_foro.h"

Foro::Foro(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Foro)
{
    ui->setupUi(this);
}

Foro::~Foro()
{
    delete ui;
}
