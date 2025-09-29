#include "loginnn.h"
#include "ui_loginnn.h"
#include <QMessageBox>
Loginnn::Loginnn(QWidget *parent)
    : Loginnn(parent)
    , ui(new Ui::Loginnn)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),
            this,SLOT(button()));
}

Loginnn::~Loginnn()
{
    delete ui;
}

void Loginnn::button()
{
    QString name[]={"abc","def","ghi"};
    QString code[]={"abc12","def34","ghi46"};

    QString uName= ui->lineEdit->text();
    QString uCode= ui->lineEdit_2->text();

    bool found = false;
    for (int i = 0;i<name->length() ;i++) {
        if(uName == name[i] && uCode == code[i] ){
            QMessageBox::information(this,"Bienvenido",
                                     "usuario: "+name[i]+"\n" "Bienvenido al ns que");
            found =true;
            break;
        }

    }
    if(!found)
    {
        QMessageBox::information(this,"error",
                                 "usuario invalido" );
    }
}

