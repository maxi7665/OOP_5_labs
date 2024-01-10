#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_processButton_clicked();

    void on_squareComboBox_currentIndexChanged(int index);

    void on_economRadioButton_clicked(bool checked);

    void on_businessRadioButton_clicked();

    void on_luxuryRadioButton_clicked();

    void on_foodCheckBox_stateChanged(int arg1);

    void on_parkingCheckBox_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;

    void clearResultLabel();
};
#endif // MAINWINDOW_H
