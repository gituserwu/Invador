#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

#include <ByNetEngine.h>
#include <ByNetInterface.h>
#include <ByNetDev.h>

#include <map>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    ByNetApInfo *read_cap_file(const char *filename, uint8_t *bssid);

private slots:
    void on_mDevPushButton_clicked();

    void on_mDevPushButton_2_clicked();

    void on_mDevPushButton_3_clicked();

    void on_mDevPushButton_4_clicked();

    void on_mDevPushButton_5_clicked();

    void on_mDevPushButton_6_clicked();

    void on_mDevPushButton_7_clicked();

    void mEngine_WpaCaptured(ByNetMacAddr bssid);

    void mEngine_NewAp();

private:
    Ui::MainWindow *ui;
    ByNetEngine m_engine;
    ByNetInterface *m_moninterface = NULL;
};

#endif // MAINWINDOW_H
