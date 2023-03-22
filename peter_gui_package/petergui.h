#ifndef PETERGUI_H
#define PETERGUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PeterGui; }
QT_END_NAMESPACE

class PeterGui : public QMainWindow
{
    Q_OBJECT

public:
    PeterGui(QWidget *parent = nullptr);
    ~PeterGui();

private:
    Ui::PeterGui *ui;

    //NEED TO REPLACE THE QWIDGET CLASS WITH OUR OWN WIDGET CLASS
    QWidget* SystemWidget = new QWidget();
    QWidget* PerceptionWidget = new QWidget();
    QWidget* ManipulationWidget = new QWidget();
    QWidget* EndEffectorWidget = new QWidget();
    //NEED TO REPLACE THE QWIDGET CLASS WITH OUR OWN WIDGET CLASS

};
#endif // PETERGUI_H
