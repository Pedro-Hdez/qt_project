/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    RenderArea *renderArea;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAstroid;
    QPushButton *btnCicloid;
    QPushButton *btHyugensCicloid;
    QPushButton *btnHypoCicloid;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        renderArea = new RenderArea(centralwidget);
        renderArea->setObjectName(QString::fromUtf8("renderArea"));

        horizontalLayout->addWidget(renderArea);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnAstroid = new QPushButton(centralwidget);
        btnAstroid->setObjectName(QString::fromUtf8("btnAstroid"));

        verticalLayout->addWidget(btnAstroid);

        btnCicloid = new QPushButton(centralwidget);
        btnCicloid->setObjectName(QString::fromUtf8("btnCicloid"));

        verticalLayout->addWidget(btnCicloid);

        btHyugensCicloid = new QPushButton(centralwidget);
        btHyugensCicloid->setObjectName(QString::fromUtf8("btHyugensCicloid"));

        verticalLayout->addWidget(btHyugensCicloid);

        btnHypoCicloid = new QPushButton(centralwidget);
        btnHypoCicloid->setObjectName(QString::fromUtf8("btnHypoCicloid"));

        verticalLayout->addWidget(btnHypoCicloid);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAstroid->setText(QApplication::translate("MainWindow", "Astroid", nullptr));
        btnCicloid->setText(QApplication::translate("MainWindow", "Cicloid", nullptr));
        btHyugensCicloid->setText(QApplication::translate("MainWindow", "Hyugens Cicloid", nullptr));
        btnHypoCicloid->setText(QApplication::translate("MainWindow", "Hypocicloid", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
