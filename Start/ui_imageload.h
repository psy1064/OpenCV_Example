/********************************************************************************
** Form generated from reading UI file 'imageload.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGELOAD_H
#define UI_IMAGELOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageLoad
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *btnShowImage;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageLoad)
    {
        if (ImageLoad->objectName().isEmpty())
            ImageLoad->setObjectName(QStringLiteral("ImageLoad"));
        ImageLoad->resize(319, 194);
        centralWidget = new QWidget(ImageLoad);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnShowImage = new QPushButton(centralWidget);
        btnShowImage->setObjectName(QStringLiteral("btnShowImage"));

        gridLayout->addWidget(btnShowImage, 0, 0, 1, 1);

        ImageLoad->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ImageLoad);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImageLoad->setStatusBar(statusBar);

        retranslateUi(ImageLoad);

        QMetaObject::connectSlotsByName(ImageLoad);
    } // setupUi

    void retranslateUi(QMainWindow *ImageLoad)
    {
        ImageLoad->setWindowTitle(QApplication::translate("ImageLoad", "ImageLoad", Q_NULLPTR));
        btnShowImage->setText(QApplication::translate("ImageLoad", "Show Image", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImageLoad: public Ui_ImageLoad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGELOAD_H
