#include "mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent){

    QWidget *center = new QWidget();
    setCentralWidget(center);

    QGridLayout *mainLayout = new QGridLayout(center);

    turnCount = 0;
    symbol = "X";

    g1AButton = new QPushButton("");
    g1BButton = new QPushButton("");
    g1CButton = new QPushButton("");
    g2AButton = new QPushButton("");
    g2BButton = new QPushButton("");
    g2CButton = new QPushButton("");
    g3AButton = new QPushButton("");
    g3BButton = new QPushButton("");
    g3CButton = new QPushButton("");

    g1AButton->setStyleSheet("border:2px solid black; font-size: 70px;");
    g1BButton->setStyleSheet("border:2px solid black; font-size: 70px;");
    g1CButton->setStyleSheet("border:2px solid black; font-size: 70px;");
    g2AButton->setStyleSheet("border:2px solid black; font-size: 70px;");
    g2BButton->setStyleSheet("border:2px solid black; font-size: 70px;");
    g2CButton->setStyleSheet("border:2px solid black; font-size: 70px;");
    g3AButton->setStyleSheet("border:2px solid black; font-size: 70px;");
    g3BButton->setStyleSheet("border:2px solid black; font-size: 70px;");
    g3CButton->setStyleSheet("border:2px solid black; font-size: 70px;");

    g1AButton->QPushButton::setFixedSize(200,200);
    g1BButton->QPushButton::setFixedSize(200,200);
    g1CButton->QPushButton::setFixedSize(200,200);
    g2AButton->QPushButton::setFixedSize(200,200);
    g2BButton->QPushButton::setFixedSize(200,200);
    g2CButton->QPushButton::setFixedSize(200,200);
    g3AButton->QPushButton::setFixedSize(200,200);
    g3BButton->QPushButton::setFixedSize(200,200);
    g3CButton->QPushButton::setFixedSize(200,200);

    mainLayout->addWidget(g1AButton, 0, 0);
    mainLayout->addWidget(g1BButton, 0, 1);
    mainLayout->addWidget(g1CButton, 0, 2);
    mainLayout->addWidget(g2AButton, 1, 0);
    mainLayout->addWidget(g2BButton, 1, 1);
    mainLayout->addWidget(g2CButton, 1, 2);
    mainLayout->addWidget(g3AButton, 2, 0);
    mainLayout->addWidget(g3BButton, 2, 1);
    mainLayout->addWidget(g3CButton, 2, 2);

    connect(g1AButton, &QPushButton::clicked, this, &MainWindow::g1AButtonClicked);
    connect(g1BButton, &QPushButton::clicked, this, &MainWindow::g1BButtonClicked);
    connect(g1CButton, &QPushButton::clicked, this, &MainWindow::g1CButtonClicked);
    connect(g2AButton, &QPushButton::clicked, this, &MainWindow::g2AButtonClicked);
    connect(g2BButton, &QPushButton::clicked, this, &MainWindow::g2BButtonClicked);
    connect(g2CButton, &QPushButton::clicked, this, &MainWindow::g2CButtonClicked);
    connect(g3AButton, &QPushButton::clicked, this, &MainWindow::g3AButtonClicked);
    connect(g3BButton, &QPushButton::clicked, this, &MainWindow::g3BButtonClicked);
    connect(g3CButton, &QPushButton::clicked, this, &MainWindow::g3CButtonClicked);

}

MainWindow::~MainWindow() {}

void MainWindow::checkForWin(){
    if ((g1AButton->text() == g1BButton->text()) && (g1BButton->text() == g1CButton->text()) && (g1CButton->text() != "")){
        g1AButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g1BButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g1CButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        QString msg = "We have a Winner!!! Player " + g1AButton->text() + " Wins!";
        goAgain = QMessageBox::question(this, msg,"Would you like to play again?", "Yes", "No");
        handleMessage();
    }
    else if ((g2AButton->text() == g2BButton->text()) && (g2BButton->text() == g2CButton->text()) && (g2CButton->text() != "")){
        g2AButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g2BButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g2CButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        QString msg = "We have a Winner!!! Player " + g2AButton->text() + " Wins!";
        goAgain = QMessageBox::question(this, msg,"Would you like to play again?", "Yes", "No");
        handleMessage();
    }
    else if ((g3AButton->text() == g3BButton->text()) && (g3BButton->text() == g3CButton->text()) && (g3CButton->text() != "")){
        g3AButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g3BButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g3CButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        QString msg = "We have a Winner!!! Player " + g3AButton->text() + " Wins!";
        goAgain = QMessageBox::question(this, msg,"Would you like to play again?", "Yes", "No");
        handleMessage();
    }
    else if ((g1AButton->text() == g2AButton->text()) && (g2AButton->text() == g3AButton->text()) && (g3AButton->text() != "")){
        g1AButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g2AButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g3AButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        QString msg = "We have a Winner!!! Player " + g1AButton->text() + " Wins!";
        goAgain = QMessageBox::question(this, msg,"Would you like to play again?", "Yes", "No");
        handleMessage();
    }
    else if ((g1BButton->text() == g2BButton->text()) && (g2BButton->text() == g3BButton->text()) && (g3BButton->text() != "")){
        g1BButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g2BButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g3BButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        QString msg = "We have a Winner!!! Player " + g1BButton->text() + " Wins!";
        goAgain = QMessageBox::question(this, msg,"Would you like to play again?", "Yes", "No");
        handleMessage();
    }
    else if ((g1CButton->text() == g2CButton->text()) && (g2CButton->text() == g3CButton->text()) && (g3CButton->text() != "")){
        g1CButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g2CButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g3CButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        QString msg = "We have a Winner!!! Player " + g1CButton->text() + " Wins!";
        goAgain = QMessageBox::question(this, msg,"Would you like to play again?", "Yes", "No");
        handleMessage();
    }
    else if ((g1AButton->text() == g2BButton->text()) && (g2BButton->text() == g3CButton->text()) && (g3CButton->text() != "")){
        g1AButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g2BButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g3CButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        QString msg = "We have a Winner!!! Player " + g1AButton->text() + " Wins!";
        goAgain = QMessageBox::question(this, msg,"Would you like to play again?", "Yes", "No");
        handleMessage();
    }
    else if ((g1CButton->text() == g2BButton->text()) && (g2BButton->text() == g3AButton->text()) && (g3AButton->text() != "")){
        g1CButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g2BButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        g3AButton->setStyleSheet("border:2px solid green; font-size: 70px;");
        QString msg = "We have a Winner!!! Player " + g1CButton->text() + " Wins!";
        goAgain = QMessageBox::question(this, msg,"Would you like to play again?", "Yes", "No");
        handleMessage();
    }else if(turnCount == 9){
        QString msg = "Looks like we have a draw :(";
        goAgain = QMessageBox::question(this, msg,"Would you like to play again?", "Yes", "No");
        handleMessage();
    }

}

void MainWindow::handleMessage(){
    if (goAgain == 0){
        g1AButton->setStyleSheet("border:2px solid black; font-size: 70px;");
        g1BButton->setStyleSheet("border:2px solid black; font-size: 70px;");
        g1CButton->setStyleSheet("border:2px solid black; font-size: 70px;");
        g2AButton->setStyleSheet("border:2px solid black; font-size: 70px;");
        g2BButton->setStyleSheet("border:2px solid black; font-size: 70px;");
        g2CButton->setStyleSheet("border:2px solid black; font-size: 70px;");
        g3AButton->setStyleSheet("border:2px solid black; font-size: 70px;");
        g3BButton->setStyleSheet("border:2px solid black; font-size: 70px;");
        g3CButton->setStyleSheet("border:2px solid black; font-size: 70px;");

        g1AButton->setDisabled(false);
        g1BButton->setDisabled(false);
        g1CButton->setDisabled(false);
        g2AButton->setDisabled(false);
        g2BButton->setDisabled(false);
        g2CButton->setDisabled(false);
        g3AButton->setDisabled(false);
        g3BButton->setDisabled(false);
        g3CButton->setDisabled(false);

        g1AButton->setText("");
        g1BButton->setText("");
        g1CButton->setText("");
        g2AButton->setText("");
        g2BButton->setText("");
        g2CButton->setText("");
        g3AButton->setText("");
        g3BButton->setText("");
        g3CButton->setText("");

        turnCount = 0;
        symbol= "X";
    }
}


void MainWindow::g1AButtonClicked(){
    turnCount++;
    if (symbol){
        g1AButton->setText("X");
    }else{
        g1AButton->setText("O");
    }
    g1AButton->setDisabled(true);
    symbol= !symbol;
    if (turnCount >= 3){
        checkForWin();
    }

}
void MainWindow::g1BButtonClicked(){
    turnCount++;
    if (symbol){
        g1BButton->setText("X");
    }else{
        g1BButton->setText("O");
    }
    g1BButton->setDisabled(true);
    symbol= !symbol;
    if (turnCount >= 3){
        checkForWin();
    }
}
void MainWindow::g1CButtonClicked(){
    turnCount++;
    if (symbol){
        g1CButton->setText("X");
    }else{
        g1CButton->setText("O");
    }
    g1CButton->setDisabled(true);
    symbol= !symbol;
    if (turnCount >= 3){
        checkForWin();
    }
}
void MainWindow::g2AButtonClicked(){
    turnCount++;
    if (symbol){
        g2AButton->setText("X");
    }else{
        g2AButton->setText("O");
    }
    g2AButton->setDisabled(true);
    symbol= !symbol;
    if (turnCount >= 3){
        checkForWin();
    }
}
void MainWindow::g2BButtonClicked(){
    turnCount++;
    if (symbol){
        g2BButton->setText("X");
    }else{
        g2BButton->setText("O");
    }
    g2BButton->setDisabled(true);
    symbol= !symbol;
    if (turnCount >= 3){
        checkForWin();
    }
}
void MainWindow::g2CButtonClicked(){
    turnCount++;
    if (symbol){
        g2CButton->setText("X");
    }else{
        g2CButton->setText("O");
    }
    g2CButton->setDisabled(true);
    symbol= !symbol;
    if (turnCount >= 3){
        checkForWin();
    }
}
void MainWindow::g3AButtonClicked(){
    turnCount++;
    if (symbol){
        g3AButton->setText("X");
    }else{
        g3AButton->setText("O");
    }
    g3AButton->setDisabled(true);
    symbol= !symbol;
    if (turnCount >= 3){
        checkForWin();
    }
}
void MainWindow::g3BButtonClicked(){
    turnCount++;
    if (symbol){
        g3BButton->setText("X");
    }else{
        g3BButton->setText("O");
    }
    g3BButton->setDisabled(true);
    symbol= !symbol;
    if (turnCount >= 3){
        checkForWin();
    }
}
void MainWindow::g3CButtonClicked(){
    turnCount++;
    if (symbol){
        g3CButton->setText("X");
    }else{
        g3CButton->setText("O");
    }
    g3CButton->setDisabled(true);
    symbol= !symbol;
    if (turnCount >= 3){
        checkForWin();
    }
}
