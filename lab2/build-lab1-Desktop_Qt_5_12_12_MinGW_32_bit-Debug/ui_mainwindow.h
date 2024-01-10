/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *mainLabel;
    QLabel *squareLabel;
    QComboBox *squareComboBox;
    QRadioButton *economRadioButton;
    QRadioButton *businessRadioButton;
    QRadioButton *luxuryRadioButton;
    QCheckBox *foodCheckBox;
    QCheckBox *parkingCheckBox;
    QPushButton *processButton;
    QLabel *resultTextLabel;
    QLabel *resultLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(676, 485);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mainLabel = new QLabel(centralwidget);
        mainLabel->setObjectName(QString::fromUtf8("mainLabel"));
        mainLabel->setGeometry(QRect(240, 50, 191, 16));
        squareLabel = new QLabel(centralwidget);
        squareLabel->setObjectName(QString::fromUtf8("squareLabel"));
        squareLabel->setGeometry(QRect(70, 90, 55, 16));
        squareComboBox = new QComboBox(centralwidget);
        squareComboBox->addItem(QString());
        squareComboBox->addItem(QString());
        squareComboBox->addItem(QString());
        squareComboBox->setObjectName(QString::fromUtf8("squareComboBox"));
        squareComboBox->setGeometry(QRect(60, 110, 75, 24));
        economRadioButton = new QRadioButton(centralwidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(economRadioButton);
        economRadioButton->setObjectName(QString::fromUtf8("economRadioButton"));
        economRadioButton->setGeometry(QRect(60, 170, 97, 22));
        economRadioButton->setChecked(true);
        businessRadioButton = new QRadioButton(centralwidget);
        buttonGroup->addButton(businessRadioButton);
        businessRadioButton->setObjectName(QString::fromUtf8("businessRadioButton"));
        businessRadioButton->setGeometry(QRect(60, 190, 97, 22));
        luxuryRadioButton = new QRadioButton(centralwidget);
        buttonGroup->addButton(luxuryRadioButton);
        luxuryRadioButton->setObjectName(QString::fromUtf8("luxuryRadioButton"));
        luxuryRadioButton->setGeometry(QRect(60, 210, 97, 22));
        foodCheckBox = new QCheckBox(centralwidget);
        foodCheckBox->setObjectName(QString::fromUtf8("foodCheckBox"));
        foodCheckBox->setGeometry(QRect(60, 250, 83, 22));
        parkingCheckBox = new QCheckBox(centralwidget);
        parkingCheckBox->setObjectName(QString::fromUtf8("parkingCheckBox"));
        parkingCheckBox->setGeometry(QRect(60, 270, 151, 22));
        processButton = new QPushButton(centralwidget);
        processButton->setObjectName(QString::fromUtf8("processButton"));
        processButton->setGeometry(QRect(270, 310, 80, 25));
        resultTextLabel = new QLabel(centralwidget);
        resultTextLabel->setObjectName(QString::fromUtf8("resultTextLabel"));
        resultTextLabel->setGeometry(QRect(190, 360, 81, 16));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(280, 360, 141, 81));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 676, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\221\321\213\321\201\321\202\321\200\320\276\320\262 \320\234.\320\224. Z1431", nullptr));
        mainLabel->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\320\265\321\202 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\320\270 \320\277\321\200\320\276\320\266\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        squareLabel->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        squareComboBox->setItemText(0, QApplication::translate("MainWindow", "15\320\2742", nullptr));
        squareComboBox->setItemText(1, QApplication::translate("MainWindow", "25\320\2742", nullptr));
        squareComboBox->setItemText(2, QApplication::translate("MainWindow", "35\320\2742", nullptr));

        economRadioButton->setText(QApplication::translate("MainWindow", "\320\255\320\272\320\276\320\275\320\276\320\274", nullptr));
        businessRadioButton->setText(QApplication::translate("MainWindow", "\320\221\320\270\320\267\320\275\320\265\321\201", nullptr));
        luxuryRadioButton->setText(QApplication::translate("MainWindow", "\320\233\321\216\320\272\321\201", nullptr));
        foodCheckBox->setText(QApplication::translate("MainWindow", "\320\237\320\270\321\202\320\260\320\275\320\270\320\265", nullptr));
        parkingCheckBox->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\272\320\276\320\262\320\276\321\207\320\275\320\276\320\265 \320\274\320\265\321\201\321\202\320\276", nullptr));
        processButton->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        resultTextLabel->setText(QApplication::translate("MainWindow", "\320\230\321\202\320\276\320\263\320\276:", nullptr));
        resultLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
