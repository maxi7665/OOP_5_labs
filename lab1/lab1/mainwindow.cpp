#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clearResultLabel()
{
    ui->resultLabel->setText("");
}


void MainWindow::on_processButton_clicked()
{
    int sum = 0;

    switch (ui->squareComboBox->currentIndex())
    {
        case 0:

            sum += 20;

        break;

        case 1:

            sum += 30;

        break;

        case 2:

            sum += 40;

        break;
    }

    if (ui->economRadioButton->isChecked())
    {
        sum += 5;
    }

    if (ui->businessRadioButton->isChecked())
    {
        sum += 10;
    }

    if (ui->luxuryRadioButton->isChecked())
    {
        sum += 15;
    }

    int base = sum;

    int additional = 0;

    if (ui->foodCheckBox->isChecked())
    {
        additional += 10;
    }

    if (ui->parkingCheckBox->isChecked())
    {
        additional += 15;
    }

    sum += additional;

    QString sale = "0%";

    if (ui->foodCheckBox->isChecked()
        && ui->parkingCheckBox->isChecked())
    {
        sum = (double)sum * 0.9;

        sale = "10%";
    }

    auto label = std::to_string(sum);

    label = label + "$";

    ui->resultLabel->setText("Номер: " + QString::fromStdString(std::to_string(base)) + "$"
                             + "\nДоп.услуги: " + QString::fromStdString(std::to_string(additional)) + "$"
                             + "\nСкидка: " + sale
                             + "\nИтого:" + QString::fromStdString(label));
}


void MainWindow::on_squareComboBox_currentIndexChanged(int index)
{
    clearResultLabel();
}


void MainWindow::on_economRadioButton_clicked(bool checked)
{
    clearResultLabel();
}


void MainWindow::on_businessRadioButton_clicked()
{
    clearResultLabel();
}


void MainWindow::on_luxuryRadioButton_clicked()
{
    clearResultLabel();
}


void MainWindow::on_foodCheckBox_stateChanged(int arg1)
{
    clearResultLabel();
}


void MainWindow::on_parkingCheckBox_stateChanged(int arg1)
{
    clearResultLabel();
}

