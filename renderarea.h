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

   void SetBackgroundColor(QColor* backgroundColor);
   QColor* GetBackgroundColor() const;

   enum Shapes{ASTROID, CICLOID, HUYGEN_CICLOID, HYPO_CICLOID};

protected:
   void paintEvent(QPaintEvent* event) override;

private:
   QColor* backgroundColor{};
   QColor* shapeColor{};

signals:

};

#endif // RENDERAREA_H
