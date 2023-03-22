#include "petergui.h"
#include "./ui_petergui.h"
#include <QTabBar>

PeterGui::PeterGui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PeterGui)
{
    ui->setupUi(this);

    // point to the peter gui tabs
    auto* pPeterGuiTabs = ui->centralwidget->findChild<QTabWidget*>("PeterGuiTabs");

    // turn off the scroll button & make all tabs visible
    pPeterGuiTabs->setUsesScrollButtons(false);

    // place the tabs in the widget
    pPeterGuiTabs->addTab(SystemWidget, "System");
    pPeterGuiTabs->addTab(PerceptionWidget, "Perception");
    pPeterGuiTabs->addTab(ManipulationWidget, "Manipulation");
    pPeterGuiTabs->addTab(EndEffectorWidget, "End-Effector");

}

PeterGui::~PeterGui()
{

    delete ui;

    // free the memory of our widgets
    delete SystemWidget;
    delete PerceptionWidget;
    delete ManipulationWidget;
    delete EndEffectorWidget;
}

