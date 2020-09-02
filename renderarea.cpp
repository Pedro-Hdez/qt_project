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
    on_shape_changed();
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

//Loads specific values for Scale and Interval Length
void RenderArea::on_shape_changed(){
    switch(mShape){
    case Astroid:
        mScale = 40;
        mIntervalLength = 2 * M_PI;
        mStepCount = 256;
        break;
    case Cycloid:
        break;
    case HyugensCycloid:
        break;
    case HypoCycloid:
        break;
    default:
        break;

    }
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
    float step = mIntervalLength / mStepCount; //Individual steps

    //Loop for paint our shape
    for (float t = 0 ; t < mIntervalLength; t += step){
        //Value of the function for t
        QPointF point = compute_astroid(t);

        //Pixel for t in our render area
        QPoint pixel;
        pixel.setX(point.x() * mScale + center.x());
        pixel.setY(point.y() * mScale + center.y());

        //Instruction to paint a pixel
        painter.drawPoint(pixel);

    }

}

