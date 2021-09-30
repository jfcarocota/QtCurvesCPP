#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QColor>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

   QSize minimumSizeHint() const override;
   QSize sizeHint() const override;

protected:
   void paintEvent(QPaintEvent* event) override;

private:
   QColor* backgroundColor{};
   QColor* shapeColor{};

signals:

};

#endif // RENDERAREA_H
