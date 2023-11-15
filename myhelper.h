#ifndef MYHELPER_H
#define MYHELPER_H

#include <QObject>

#include <QFileDialog>
#include <QtCore>


class myHelper : public QObject
{
    Q_OBJECT
public:
    explicit myHelper(QObject *parent = nullptr);

signals:


public:
    // 配置操作：开机启动操作
    static void AutoRunSystem(bool IsAutoRun,QString ApplicationName,QString ApplicationPath){
        QSettings *regedit=new QSettings("HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",QSettings::NativeFormat);
        if(IsAutoRun){
            regedit->setValue(ApplicationName,ApplicationPath);
        }
        else
        {
            regedit->setValue(ApplicationName,"");
        }
    }

    // 判断用户输入IP地址是否正确
    static bool IsIpAddress(QString strIpAddress){
        QRegExp regexp("((2[0-5]\\d|25[0-5]|[01]?\\d\\d?)\\.{3}(2[0-4]\\d|25[0-5]|[01]?\\d\\d?)");
        return regexp.exactMatch(strIpAddress);
    }

    // 获取选择文件
    static QString GetFileName(QString filter){
        return QFileDialog::getOpenFileName(0,"用户选择文件",QCoreApplication::applicationDirPath(),filter);
    }

};

#endif // MYHELPER_H
