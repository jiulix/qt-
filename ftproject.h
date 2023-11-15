#ifndef FTPROJECT_H
#define FTPROJECT_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class FTProject; }
QT_END_NAMESPACE

class FTProject : public QDialog
{
    Q_OBJECT

public:
    FTProject(QWidget *parent = nullptr);
    ~FTProject();

private slots:
    void on_pushButtonSendFile_clicked();

    void on_pushButtonSelectFile_clicked();

    void on_pushButtonListening_clicked();

private:
    Ui::FTProject *ui;
};
#endif // FTPROJECT_H
