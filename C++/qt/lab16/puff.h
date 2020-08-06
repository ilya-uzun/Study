#ifndef PUFF_H
#define PUFF_H

#include <QWidget>
#include <QTime>
#include <QTextStream>
#include <QPainter>
#include <QString>

class Puff : public QWidget
{
public:
    Puff(QWidget* parent = 0);

protected:
    void paintEvent(QPaintEvent* event);
    void timerEvent(QTimerEvent* event);

private:
    int x;
    qreal opacity;
    int timerId;

    void doPainting();
};

#endif // PUFF_H
