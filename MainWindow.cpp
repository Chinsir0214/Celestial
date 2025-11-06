#include "MainWindow.h"

#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUI();
    setWindowTitle("celestial");
    resize(1000, 700);
}

MainWindow::~MainWindow()
{
}

void MainWindow::setupUI()
{
    QWidget *centralWidget = new QWidget(this);
    this->setCentralWidget(centralWidget);

    albumListWidget = new QListWidget();
    albumListWidget->addItem("Album 1: The Dark Side of the Moon");
    albumListWidget->addItem("Album 2: Abbey Road");
    albumListWidget->addItem("Album 3: Hotel California");

    QVBoxLayout *rightPanelLayout = new QVBoxLayout();

    trackListView = new QTableView();

    QHBoxLayout *controlsLayout = new QHBoxLayout();
    prevButton = new QPushButton("<< Prev");
    playButton = new QPushButton("Play");
    nextButton = new QPushButton("Next >>");
    controlsLayout->addWidget(prevButton);
    controlsLayout->addWidget(playButton);
    controlsLayout->addWidget(nextButton);

    progressSlider = new QSlider(Qt::Horizontal);
    volumeSlider = new QSlider(Qt::Horizontal);
    volumeSlider->setMaximumWidth(150);
    volumeSlider->setValue(80);

    rightPanelLayout->addWidget(trackListView);
    rightPanelLayout->addWidget(progressSlider);
    rightPanelLayout->addLayout(controlsLayout);

    QHBoxLayout *volumeLayout = new QHBoxLayout();
    volumeLayout->addStretch();
    volumeLayout->addWidget(new QLabel("Volume:"));
    volumeLayout->addWidget(volumeSlider);
    rightPanelLayout->addLayout(volumeLayout);

    QHBoxLayout *mainLayout = new QHBoxLayout(centralWidget);
    mainLayout->addWidget(albumListWidget, 1);
    mainLayout->addLayout(rightPanelLayout, 3);
}