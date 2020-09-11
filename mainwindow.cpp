#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "scribblearea.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scribbleArea = new ScribbleArea();
    setCentralWidget(scribbleArea);

    createActions();
    createMenus();

    setWindowTitle("Scribble");
    resize(500, 500);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{

}

void MainWindow::createActions()
{

}

void MainWindow::createMenus()
{

}

bool MainWindow::maybeSave()
{

}

bool MainWindow::saveFile(const QByteArray &fileFormat)
{

}

void MainWindow::open()
{

}

void MainWindow::save()
{

}

void MainWindow::color()
{

}

void MainWindow::penColor()
{

}

void MainWindow::penWidth()
{

}

void MainWindow::about()
{

}

