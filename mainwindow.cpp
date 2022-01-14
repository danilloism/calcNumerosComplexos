#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditResultado->setReadOnly(true);
    QRegExp regExp("-?[0-9]*");
    validator = new QRegExpValidator(regExp, this);
    ui->lineEdit1NC_PR->setValidator(validator);
    ui->lineEdit1NC_PI->setValidator(validator);
    ui->lineEdit2NC_PR->setValidator(validator);
    ui->lineEdit1NC_PI->setValidator(validator);
    this->setFixedSize(QSize(340, 215));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete validator;
}

void MainWindow::on_pushButtonAdicao_clicked()
{
    dnn::NComplexo num1, num2, resultado;

    int parteReal = ui->lineEdit1NC_PR->text().toInt();
    int parteImaginaria = ui->lineEdit1NC_PI->text().toInt();

    num1.set(parteReal,parteImaginaria);

    parteReal = ui->lineEdit2NC_PR->text().toInt();
    parteImaginaria = ui->lineEdit2NC_PI->text().toInt();

    num2.set(parteReal,parteImaginaria);

    resultado = num1+num2;

    ui->lineEditResultado->setText(resultado.get());
}

void MainWindow::on_pushButtonSubtracao_clicked()
{
    dnn::NComplexo num1, num2, resultado;

    int parteReal = ui->lineEdit1NC_PR->text().toInt();
    int parteImaginaria = ui->lineEdit1NC_PI->text().toInt();

    num1.set(parteReal,parteImaginaria);

    parteReal = ui->lineEdit2NC_PR->text().toInt();
    parteImaginaria = ui->lineEdit2NC_PI->text().toInt();

    num2.set(parteReal,parteImaginaria);

    resultado = num1-num2;

    ui->lineEditResultado->setText(resultado.get());
}

void MainWindow::on_pushButtonMultiplicacao_clicked()
{
    dnn::NComplexo num1, num2, resultado;

    int parteReal = ui->lineEdit1NC_PR->text().toInt();
    int parteImaginaria = ui->lineEdit1NC_PI->text().toInt();

    num1.set(parteReal,parteImaginaria);

    parteReal = ui->lineEdit2NC_PR->text().toInt();
    parteImaginaria = ui->lineEdit2NC_PI->text().toInt();

    num2.set(parteReal,parteImaginaria);

    resultado = num1*num2;

    ui->lineEditResultado->setText(resultado.get());
}

void MainWindow::on_pushButtonDivisao_clicked()
{
    dnn::NComplexo num1, num2, resultado;

    int parteReal = ui->lineEdit1NC_PR->text().toInt();
    int parteImaginaria = ui->lineEdit1NC_PI->text().toInt();

    num1.set(parteReal,parteImaginaria);

    parteReal = ui->lineEdit2NC_PR->text().toInt();
    parteImaginaria = ui->lineEdit2NC_PI->text().toInt();

    num2.set(parteReal,parteImaginaria);

    resultado = num1/num2;

    ui->lineEditResultado->setText(resultado.get());
}

void MainWindow::on_pushButtonEhIgual_clicked()
{
    dnn::NComplexo num1, num2;

    int parteReal = ui->lineEdit1NC_PR->text().toInt();
    int parteImaginaria = ui->lineEdit1NC_PI->text().toInt();

    num1.set(parteReal,parteImaginaria);

    parteReal = ui->lineEdit2NC_PR->text().toInt();
    parteImaginaria = ui->lineEdit2NC_PI->text().toInt();

    num2.set(parteReal,parteImaginaria);

    if(num1==num2){
        ui->lineEditResultado->setText("Os números complexos são iguais.");
    }else{
        ui->lineEditResultado->setText("Os números complexos não são iguais.");
    }
}

void MainWindow::on_pushButtonEhDiferente_clicked()
{
    dnn::NComplexo num1, num2;

    int parteReal = ui->lineEdit1NC_PR->text().toInt();
    int parteImaginaria = ui->lineEdit1NC_PI->text().toInt();

    num1.set(parteReal,parteImaginaria);

    parteReal = ui->lineEdit2NC_PR->text().toInt();
    parteImaginaria = ui->lineEdit2NC_PI->text().toInt();

    num2.set(parteReal,parteImaginaria);

    if(num1!=num2){
        ui->lineEditResultado->setText("Os números complexos são diferentes.");
    }else{
        ui->lineEditResultado->setText("Os números complexos não são diferentes.");
    }
}
