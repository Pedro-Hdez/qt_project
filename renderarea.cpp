#include "renderarea.h"
#include <QPainter>
#include <QPaintEvent>

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor(0, 0, 255),
    mShapeColor(255, 255, 255)
{
}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(100, 100);
}

QSize RenderArea::sizeHint() const
{
    return QSize(400, 200);
}

void RenderArea::paintEvent(QPaintEvent *event)
{
    //Object to paint in the widget
    //The painter's parent is this (Our RenderArea class)
    QPainter painter(this);
    //Set the painter color as blue
    painter.setBrush(mBackgroundColor);
    //Render hint
    painter.setRenderHint(QPainter::Antialiasing, true);
    //Draw a rectangle in the entire render area
    painter.drawRect(this -> rect());
    //Draw a line
    painter.drawLine(this->rect().topLeft(), this->rect().bottomRight());
}

