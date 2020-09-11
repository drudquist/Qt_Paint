#ifndef SCRIBBLEAREA_H
#define SCRIBBLEAREA_H

#include <QColor>
#include <QImage>
#include <QPoint>
#include <QWidget>

class ScribbleArea : public QWidget
{
    Q_OBJECT
public:
    explicit ScribbleArea(QWidget *parent = nullptr);

    void setPenColor(const QColor& newColor);
    void setPenWidth(int newWidth);

    bool openImage(const QString& fileName);
    bool saveImage(const QString& fileName, const char* fileFormat);

    bool isModified() const { return modified; }
    QColor penColor() const { return myPenColor; }
    int penWidth() const { return myPenWidth; }


public slots:

    void clearImage();
    void printImage();


protected:

    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

    void paintEvent(QPaintEvent* event) override;
    void resizeEvent(QResizeEvent* event) override;


private:
    bool modified;
    bool scribbling; // user is currently drawing

    int myPenWidth;

    QColor myPenColor;
    QImage image;
    QPoint lastPoint;

    void drawLineTo(const QPoint& endPoint);
    void resizeImage(QImage* image, const QSize& newSize);
};

#endif // SCRIBBLEAREA_H
