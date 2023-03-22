/********************************************************************************
** Form generated from reading UI file 'petergui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PETERGUI_H
#define UI_PETERGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PeterGui
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *PeterGuiTabs;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PeterGui)
    {
        if (PeterGui->objectName().isEmpty())
            PeterGui->setObjectName("PeterGui");
        PeterGui->resize(800, 600);
        centralwidget = new QWidget(PeterGui);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        PeterGuiTabs = new QTabWidget(centralwidget);
        PeterGuiTabs->setObjectName("PeterGuiTabs");

        verticalLayout->addWidget(PeterGuiTabs);


        verticalLayout_2->addLayout(verticalLayout);

        PeterGui->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(PeterGui);
        statusbar->setObjectName("statusbar");
        PeterGui->setStatusBar(statusbar);

        retranslateUi(PeterGui);

        PeterGuiTabs->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(PeterGui);
    } // setupUi

    void retranslateUi(QMainWindow *PeterGui)
    {
        PeterGui->setWindowTitle(QCoreApplication::translate("PeterGui", "PeterGui", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PeterGui: public Ui_PeterGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PETERGUI_H
