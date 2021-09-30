#include "renderarea.h"
#include<QPaintEvent>
#include<QPainter>

RenderArea::RenderArea(QWidget *parent) : QWidget(parent)
{
    backgroundColor = new QColor(0, 0, 255);
    shapeColor = new QColor(255, 255, 255);
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
    QPainter* painter{new QPainter(this)};
    painter->setBrush(*backgroundColor);
    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->setPen(*shapeColor);

    painter->drawRect(rect());
    painter->drawLine(rect().topLeft(), rect().bottomRight());
}

void RenderArea::SetBackgroundColor(QColor* backgroundColor)
{
    this->backgroundColor = backgroundColor;
}

QColor* RenderArea::GetBackgroundColor() const
{
    return backgroundColor;
}
