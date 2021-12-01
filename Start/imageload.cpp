#include "imageload.h"
#include "ui_imageload.h"
#include <opencv2/opencv.hpp>
#include <QDir>
#include <QDebug>

ImageLoad::ImageLoad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImageLoad)
{
    ui->setupUi(this);

    connect(ui->btnShowImage, SIGNAL(clicked()), this, SLOT(Slot_pushShowImageButton()));
}

ImageLoad::~ImageLoad()
{
    delete ui;
}

void ImageLoad::ShowDebugMessage(QString sMsg)
{
    qDebug() << sMsg;
    ui->statusBar->showMessage(sMsg,3000);
}

void ImageLoad::Slot_pushShowImageButton()
{
    QString sImagePath = QApplication::applicationDirPath() + "/iu.jpg";
    qDebug() << sImagePath;

    QFile file(sImagePath);
    if ( !file.exists() ) {
        ShowDebugMessage("파일을 찾을 수 없습니다.");
    }

    cv::Mat image = cv::imread(sImagePath.toStdString(), cv::IMREAD_COLOR);

    if ( image.empty() ) {
        ShowDebugMessage("이미지 파일을 읽을 수 없습니다.");
    }

    cv::imshow("Image Test", image);
    cv::waitKey(0);
    cv::destroyAllWindows();
}


