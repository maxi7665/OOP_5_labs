/********************************************************************************
** Form generated from reading UI file 'hellowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWINDOW_H
#define UI_HELLOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HelloWindow)
    {
        if (HelloWindow->objectName().isEmpty())
            HelloWindow->setObjectName(QString::fromUtf8("HelloWindow"));
        HelloWindow->resize(608, 284);
        centralwidget = new QWidget(HelloWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 40, 471, 51));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 150, 199, 52));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Sans Serif\";"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Sans Serif\";"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        HelloWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HelloWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 608, 25));
        HelloWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(HelloWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HelloWindow->setStatusBar(statusbar);

        retranslateUi(HelloWindow);

        QMetaObject::connectSlotsByName(HelloWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HelloWindow)
    {
        HelloWindow->setWindowTitle(QApplication::translate("HelloWindow", "\320\221\321\213\321\201\321\202\321\200\320\276\320\262 \320\234.\320\224. Z1431", nullptr));
        label->setText(QApplication::translate("HelloWindow", "\320\227\320\264\321\200\320\260\320\262\321\201\321\202\320\262\321\203\320\271 QT! \320\235\320\260\321\207\320\270\320\275\320\260\320\265\320\274 \321\202\320\265\320\261\321\217 \320\270\320\267\321\203\321\207\320\260\321\202\321\214!", nullptr));
        pushButton->setText(QApplication::translate("HelloWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        label_2->setText(QApplication::translate("HelloWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloWindow: public Ui_HelloWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWINDOW_H
