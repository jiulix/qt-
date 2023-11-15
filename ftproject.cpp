#include "ftproject.h"
#include "ui_ftproject.h"

#include "myhelper.h"

FTProject::FTProject(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FTProject)
{
    ui->setupUi(this);
}

FTProject::~FTProject()
{
    delete ui;
}


void FTProject::on_pushButtonSendFile_clicked()
{

}

void FTProject::on_pushButtonSelectFile_clicked()
{

    QString strFilter="所有文件(*.*)";
    ui->lineEditSendFile->setText(myHelper::GetFileName(strFilter));

    ui->ProgressBarSendFile->setRange(0,100);
    ui->ProgressBarSendFile->setValue(0);

    ui->progressBarReceiveFile->setRange(0,100);
    ui->progressBarReceiveFile->setValue(0);

}

void FTProject::on_pushButtonListening_clicked()
{

}
