#include "gameover.h"
#include "ui_gameover.h"
#include"mainwindow.h"
gameover::gameover(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gameover)
{
}

gameover::~gameover()
{
    delete ui;
}

void gameover::start()
{
    ui=new Ui::gameover;
    ui->setupUi(this);
    show();
}
void gameover::on_again_clicked()
{
    close();
    emit emitsignalofstartingmainwindow();
}
