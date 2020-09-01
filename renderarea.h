#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QColor>

class RenderArea : public QWidget
{
public:
    explicit RenderArea(QWidget *parent = nullptr);

    //To have a well-behaved custom widget
    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

    //Geometric figures enumeration
    enum ShapeType{Astroid, Cycloid, HyugensCycloid, HypoCycloid};

    //Function to set the background color
    void setBackgroundColor(QColor color){mBackgroundColor = color;}//Setter
    //'const' to prevent modification of any member class variable
    QColor backgroundColor() const {return mBackgroundColor;}//Getter

    void setShape(ShapeType shape) {mShape = shape;}//Setter
    ShapeType shape () const {return mShape;}//Getter
protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:
    QColor mBackgroundColor;
    QColor mShapeColor;
    ShapeType mShape;

};

#endif // RENDERAREA_H
