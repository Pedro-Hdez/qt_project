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
    enum Shapes{Astroid, Ciclod, HyugensCicloid, HypoCicloid};

    //Setter
    void setBackgroundColor(QColor color){mBackgroundColor = color;}
    //Getter
    //'const' to prevent modification of any member class variable
    QColor backgroundColor() const {return mBackgroundColor;}
protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:
    QColor mBackgroundColor;
    QColor mShapeColor;

};

#endif // RENDERAREA_H
