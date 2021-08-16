#ifndef DATASOURCE_EL_H
#define DATASOURCE_EL_H

#include <QWidget>
#include <QTimer>
#include "datasource.h"
#include "modelidentf.h"
#include "mainwindow.h"


class DataSource_el : public DataSource
{
    Q_OBJECT
public:
    DataSource_el(double P_nom, double n_nom, double U_fnom,
                  double cosf_nom, double kpd_nom, double muk, double n_0);
    void init();
    void stop();

    QTimer *dataTimer2;

    double getUa() {return ua;};
    double getUb() {return ub;};
    double getIa() {return ia;};
    double getIb() {return ib;};
    double getW() {return w;};

private:
    double ua,ub,ia,ib,w;

    double R10, R20, L10, Lm0;
    ModelIdentf *model;

public slots:
    void read();

};

#endif // DATASOURCE_EL_H
