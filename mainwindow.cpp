#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "perfil.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->botonPerfil, &QPushButton::clicked, this, &MainWindow::abrirPerfil);

    ui->calendario->setStyleSheet(
        "QCalendarWidget QWidget#qt_calendar_navigationbar { "
        "    background-color: #1464F6; "
        "} "
        "QCalendarWidget QToolButton { "
        "    background-color: #1464F6; "
        "    color: white; "
        "    border: none; "
        "}"

        "QCalendarWidget QTableView::item { "
        "    background-color: white; "
        "    border: 1px solid #000000; "
        "    color:black;"
        "} "


        );
    ui->calendario->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);

    ui->botonR->setText("←");
    ui->botonR->setStyleSheet(
        "font-size: 32px; "
        "color:#E61610;"
        "backgroud-color:transparent;"
        "border:none;");
    ui->botonPerfil->setStyleSheet(
        "backgroud-color:transparent;"
        "border:none;"
        );
}

void MainWindow::abrirPerfil()
{
    this->hide(); // Ocultar ventana actual
    perfil *ventanaPerfil = new perfil();
    ventanaPerfil->showMaximized();
}


MainWindow::~MainWindow()
{
    delete ui;
}



void llamar(){

}
