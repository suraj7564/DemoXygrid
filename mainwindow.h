#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <climits>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct WindowData
{
public :
    uint height, width;
    const char* title;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(const char* title = "Window", uint width = 1280, uint height = 720, QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    WindowData m_data;
};
#endif // MAINWINDOW_H
