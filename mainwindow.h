#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<NComplexo.h>
#include<QIntValidator>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonAdicao_clicked();

    void on_pushButtonSubtracao_clicked();

    void on_pushButtonMultiplicacao_clicked();

    void on_pushButtonDivisao_clicked();

    void on_pushButtonEhIgual_clicked();

    void on_pushButtonEhDiferente_clicked();

private:
    Ui::MainWindow *ui;
    QValidator *validator;
};

#endif // MAINWINDOW_H
