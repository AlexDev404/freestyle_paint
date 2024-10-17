#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QPolygon>
#include <QRect>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event) {
    QMainWindow::paintEvent(event);

    // Create a QPainter object
    QPainter painter(this);

    // Set pen and brush for drawing
    painter.setPen(Qt::black); // Set pen color to black
    //painter.setBrush(Qt::red); // Set brush color to red

    // Define points for the triangle
    QPolygonF triangle;
    triangle << QPointF(250, 200) // Point 1
             << QPointF(100, 200) // Point 2
             << QPointF(175, 125); // Point 3

    // Draw the triangle
    painter.drawPolygon(triangle); // Commit the shape

    // Change the fill
    //painter.setBrush(Qt::blue);
    QRect rect2;
    rect2.setRect(100, 200, 150, 100);
    painter.drawRect(rect2); // Commit the shape

    // Draw the windows (#1)
    //painter.setBrush(Qt::red);
    QRect rect3;
    rect3.setRect(125, 225, 25, 25);
    painter.drawRect(rect3); // Commit the shape

    // Draw the windows (#2)
    //painter.setBrush(Qt::red);
    QRect rect4;
    rect4.setRect(200, 225, 25, 25);
    painter.drawRect(rect4); // Commit the shape

    // Draw the door
    //painter.setBrush(Qt::red);
    QRect rect5;
    rect5.setRect(150, 260, 50, 40);
    painter.drawRect(rect5); // Commit the shape

}
