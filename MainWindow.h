#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QListWidget;
class QTableView;
class QPushButton;
class QSlider;

class MainWindow : public MainWindow
{

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void setupUI();

    QListWidget *albumListWidget;
    QTableView *trackListView;
    QPushButton *playButton;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QSlider *progreessSlider;
    QSlider *volumeSlider;
}

#endif