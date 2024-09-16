#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

class QPushButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QPushButton *g1AButton;
    QPushButton *g1BButton;
    QPushButton *g1CButton;
    QPushButton *g2AButton;
    QPushButton *g2BButton;
    QPushButton *g2CButton;
    QPushButton *g3AButton;
    QPushButton *g3BButton;
    QPushButton *g3CButton;

    int turnCount;
    bool symbol;
    int goAgain;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void g1AButtonClicked();
    void g1BButtonClicked();
    void g1CButtonClicked();
    void g2AButtonClicked();
    void g2BButtonClicked();
    void g2CButtonClicked();
    void g3AButtonClicked();
    void g3BButtonClicked();
    void g3CButtonClicked();
    void checkForWin();
    void handleMessage();
};

#endif // MAINWINDOW_H
