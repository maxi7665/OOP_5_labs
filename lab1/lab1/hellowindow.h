#ifndef HELLOWINDOW_H
#define HELLOWINDOW_H

#include <QMainWindow>

namespace Ui {
class HelloWindow;
}

class HelloWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HelloWindow(QWidget *parent = nullptr);
    ~HelloWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::HelloWindow *ui;
};

#endif // HELLOWINDOW_H
