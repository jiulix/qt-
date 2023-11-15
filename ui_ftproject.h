/********************************************************************************
** Form generated from reading UI file 'ftproject.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FTPROJECT_H
#define UI_FTPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FTProject
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditServerIP;
    QLabel *label_2;
    QLineEdit *lineEditServerPort;
    QPushButton *pushButtonSendFile;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditSendFile;
    QPushButton *pushButtonSelectFile;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QProgressBar *ProgressBarSendFile;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEditSendStatus;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEditListenPort;
    QPushButton *pushButtonListening;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEditReceiveFile;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QProgressBar *progressBarReceiveFile;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLineEdit *lineEditReceiveStatus;

    void setupUi(QDialog *FTProject)
    {
        if (FTProject->objectName().isEmpty())
            FTProject->setObjectName(QStringLiteral("FTProject"));
        FTProject->resize(660, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/images/main.ico"), QSize(), QIcon::Normal, QIcon::Off);
        FTProject->setWindowIcon(icon);
        widget = new QWidget(FTProject);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 641, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditServerIP = new QLineEdit(widget);
        lineEditServerIP->setObjectName(QStringLiteral("lineEditServerIP"));

        horizontalLayout->addWidget(lineEditServerIP);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditServerPort = new QLineEdit(widget);
        lineEditServerPort->setObjectName(QStringLiteral("lineEditServerPort"));

        horizontalLayout->addWidget(lineEditServerPort);

        pushButtonSendFile = new QPushButton(widget);
        pushButtonSendFile->setObjectName(QStringLiteral("pushButtonSendFile"));

        horizontalLayout->addWidget(pushButtonSendFile);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditSendFile = new QLineEdit(widget);
        lineEditSendFile->setObjectName(QStringLiteral("lineEditSendFile"));
        lineEditSendFile->setEnabled(false);

        horizontalLayout_2->addWidget(lineEditSendFile);

        pushButtonSelectFile = new QPushButton(widget);
        pushButtonSelectFile->setObjectName(QStringLiteral("pushButtonSelectFile"));

        horizontalLayout_2->addWidget(pushButtonSelectFile);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        ProgressBarSendFile = new QProgressBar(widget);
        ProgressBarSendFile->setObjectName(QStringLiteral("ProgressBarSendFile"));
        ProgressBarSendFile->setValue(0);

        horizontalLayout_3->addWidget(ProgressBarSendFile);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEditSendStatus = new QLineEdit(widget);
        lineEditSendStatus->setObjectName(QStringLiteral("lineEditSendStatus"));
        lineEditSendStatus->setEnabled(false);

        horizontalLayout_4->addWidget(lineEditSendStatus);


        verticalLayout->addLayout(horizontalLayout_4);

        widget1 = new QWidget(FTProject);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 180, 641, 111));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEditListenPort = new QLineEdit(widget1);
        lineEditListenPort->setObjectName(QStringLiteral("lineEditListenPort"));

        horizontalLayout_5->addWidget(lineEditListenPort);

        pushButtonListening = new QPushButton(widget1);
        pushButtonListening->setObjectName(QStringLiteral("pushButtonListening"));

        horizontalLayout_5->addWidget(pushButtonListening);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        lineEditReceiveFile = new QLineEdit(widget1);
        lineEditReceiveFile->setObjectName(QStringLiteral("lineEditReceiveFile"));
        lineEditReceiveFile->setEnabled(false);

        horizontalLayout_6->addWidget(lineEditReceiveFile);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        progressBarReceiveFile = new QProgressBar(widget1);
        progressBarReceiveFile->setObjectName(QStringLiteral("progressBarReceiveFile"));
        progressBarReceiveFile->setValue(0);

        horizontalLayout_7->addWidget(progressBarReceiveFile);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_8->addWidget(label_11);

        lineEditReceiveStatus = new QLineEdit(widget1);
        lineEditReceiveStatus->setObjectName(QStringLiteral("lineEditReceiveStatus"));
        lineEditReceiveStatus->setEnabled(false);

        horizontalLayout_8->addWidget(lineEditReceiveStatus);


        verticalLayout_2->addLayout(horizontalLayout_8);


        retranslateUi(FTProject);

        QMetaObject::connectSlotsByName(FTProject);
    } // setupUi

    void retranslateUi(QDialog *FTProject)
    {
        FTProject->setWindowTitle(QApplication::translate("FTProject", "\346\236\201\351\200\237\346\226\207\344\273\266\344\274\240\350\276\223\345\267\245\345\205\267--\346\265\213\350\257\225\347\211\210", Q_NULLPTR));
        label->setText(QApplication::translate("FTProject", "\346\234\215\345\212\241\345\231\250IP\357\274\232", Q_NULLPTR));
        lineEditServerIP->setText(QApplication::translate("FTProject", "127.0.0.1", Q_NULLPTR));
        label_2->setText(QApplication::translate("FTProject", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        lineEditServerPort->setText(QApplication::translate("FTProject", "1258", Q_NULLPTR));
        pushButtonSendFile->setText(QApplication::translate("FTProject", "\345\217\221\351\200\201\346\226\207\344\273\266", Q_NULLPTR));
        label_3->setText(QApplication::translate("FTProject", "\345\217\221\351\200\201\346\226\207\344\273\266\357\274\232", Q_NULLPTR));
        pushButtonSelectFile->setText(QApplication::translate("FTProject", "\351\200\211\346\213\251\346\226\207\344\273\266...", Q_NULLPTR));
        label_4->setText(QApplication::translate("FTProject", "\345\217\221\351\200\201\350\277\233\345\272\246\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("FTProject", "\345\217\221\351\200\201\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("FTProject", "\347\233\221\345\220\254\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        lineEditListenPort->setText(QApplication::translate("FTProject", "1258", Q_NULLPTR));
        pushButtonListening->setText(QApplication::translate("FTProject", "\345\274\200\345\247\213\347\233\221\345\220\254", Q_NULLPTR));
        label_8->setText(QApplication::translate("FTProject", "\346\216\245\346\224\266\346\226\207\344\273\266\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("FTProject", "\346\216\245\346\224\266\350\277\233\345\272\246\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("FTProject", "\346\216\245\346\224\266\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FTProject: public Ui_FTProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTPROJECT_H
