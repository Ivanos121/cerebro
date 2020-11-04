#ifndef ELECTROMAGN_H
#define ELECTROMAGN_H

#include <QWidget>
#include <QTimer>
#include <QElapsedTimer>
#include "nabludatel.h"
#include "nabludatel_part.h"
#include "datasource.h"
#include "datasourcebvas.h"
#include "datasourcebvasw.h"
#include "qcustomplot.h"

namespace Ui {
class electromagn;
}

class electromagn : public QWidget
{
    Q_OBJECT

public:
    explicit electromagn(QWidget *parent = nullptr);
    ~electromagn();
    double key;
    int count = 0;

    void stop();

public slots:
    void realtimeDataSlot();
    void raschet_el();

private slots:
    void on_pushButton_clicked();
    //void on_tableWidget_2_cellChanged(int row, int column);

private:
    Ui::electromagn *ui;
    QElapsedTimer *time;
    Nabludatel nabludatel;
    Nabludatel_part nabludatel_part;
    DataSourceBVAS dataSourceBVAS;
    DataSourceBVASw dataSourceBVASw;
    QComboBox* combo = new QComboBox();
    QComboBox* combo2 = new QComboBox();
};

#endif // ELECTROMAGN_H