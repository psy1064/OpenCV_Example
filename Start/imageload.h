#ifndef IMAGELOAD_H
#define IMAGELOAD_H

#include <QMainWindow>

namespace Ui {
class ImageLoad;
}

class ImageLoad : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImageLoad(QWidget *parent = 0);
    ~ImageLoad();

private:
    Ui::ImageLoad *ui;
    void ShowDebugMessage(QString sMsg);

private slots:
    void Slot_pushShowImageButton();
};

#endif // IMAGELOAD_H
