#include "renderarea.h"
#include <QPainter>
#include <QPaintEvent>
#include <math.h>

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor(0, 0, 255),
    mShapeColor(255, 255, 255),
    mShape(Astroid)
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

//Function to compute the astroid function.
QPointF RenderArea::compute_astroid(float t){
    return QPointF(2 * powf(cos(t), 3), 2 * powf(sin(t), 3));
}

void RenderArea::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    //Object to paint in the widget
    //The painter's parent is this (Our RenderArea class)
    QPainter painter(this);
    //Set the painter color as blue
    //Render hint
    painter.setRenderHint(QPainter::Antialiasing, true);

    switch(mShape){
    case Astroid:
        mBackgroundColor = Qt::red;
        break;
    case Cycloid:
        mBackgroundColor = Qt::green;
        break;
    case HyugensCycloid:
        mBackgroundColor = Qt::blue;
        break;
    case HypoCycloid:
        mBackgroundColor = Qt::yellow;
        break;
    default:
        break;

    }

    //Set the color for the background
    painter.setBrush(mBackgroundColor);
    //Set the color for the shape
    painter.setPen(mShapeColor);

    //Draw a rectangle in the entire render area (Background)
    painter.drawRect(this -> rect());


    QPoint center = this -> rect().center(); //Render area's center
    float scale = 100; //Scale
    float intervalLength = 2 * M_PI; //Interval length
    int stepCount = 256; //Total steps
    float step = intervalLength / stepCount; //Individual steps

    //Loop for paint our shape
    for (float t = 0 ; t < intervalLength; t += step){
        //Value of the function for t
        QPointF point = compute_astroid(t);

        //Pixel for t in our render area
        QPoint pixel;
        pixel.setX(point.x() * scale + center.x());
        pixel.setY(point.y() * scale + center.y());

        //Instruction to paint a pixel
        painter.drawPoint(pixel);

    }

}

