#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(const char* title, uint width, uint height, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    m_data.height = height;
    m_data.width = width;
    m_data.title = title;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

