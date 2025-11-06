#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QListWidget;
class QTableView;
class QPushButton;
class QSlider;

class MainWindow : public QMainWindow
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
    QSlider *progressSlider;
    QSlider *volumeSlider;
};

#endif