#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "about.h"
#include <QTimer>
#include <QElapsedTimer>
#include <QWebEngineView>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionabout_triggered();

    void on_actionExit_triggered();

    void on_action_10_triggered();

    void on_actionhelp_triggered();

    void titleChanged(const QString &title);

    void on_action_16_triggered();

    void on_action_12_triggered();

    void on_action_17_triggered();

    void on_action_19_triggered();

    void on_action_18_triggered();

    void on_action_5_triggered();

    void on_action_9_triggered();

public:
    Ui::MainWindow *ui;
    about *rsc;

    QWebEngineView * view;
};
#endif // MAINWINDOW_H
