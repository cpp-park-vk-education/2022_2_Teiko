#ifndef METRICS_H
#define METRICS_H

#include <QLCDNumber>
#include <QPushButton>
#include <QMainWindow>
#include <QProgressBar>



bool change_money(int value, QPushButton *button, QLCDNumber *number);
void change_metrics(int value, QPushButton *button, QProgressBar *progess_bar);
void change_metrics(int value, QProgressBar *progress_bar);

#endif // METRICS_H
