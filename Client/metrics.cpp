#include "mainwindow.h"
#include "./ui_mainwindow.h"

bool MainWindow::change_money(int value, QPushButton *button, QLCDNumber *number){
    if(number->value()-value>=0){
        number->display(number->value()-value);
            emit send_metric("money",ui->main_player_user_name->text(),ui->lcdNumber->value());
        return true;
    }
    else return false;
}
void MainWindow::change_metrics(int value, QPushButton *button, QProgressBar *progress_bar){
    if(progress_bar->value()+value>100)  progress_bar->setValue(100);

    else if(progress_bar->value()+value<0) {
        progress_bar->setValue(0);
        buttons_acces(false);
        QMessageBox::information(this,"Вы проиграли!","Игра закончена");
        timer->stop();
        time_m=0;
        time_s = 0;
        ui->progressBar_happiness->setValue(0);
        ui->progressBar_intelligence->setValue(0);
        ui->progressBar_hunger->setValue(0);
        ui->lcdNumber->display(0);
        for(int i = 0;i<buttons.size();++i){
            buttons[i]->setVisible(false);
        }
        ui->pushButton_move_end->setVisible(false);
        emit bad_ending();
    }

    else {
        int k = 0;
        if(progress_bar->value()<50)
            k = value*(50+value)/50;
        else if(progress_bar->value()>50)
            k = value*(50-value)/50;
        else if(progress_bar->value() == 50)
            k = 1;
        progress_bar->setValue(progress_bar->value()+k);
    }

    if(progress_bar == ui->progressBar_happiness)
        emit send_metric("happiness",ui->main_player_user_name->text(),progress_bar->value());
    else if(progress_bar == ui->progressBar_intelligence)
        emit send_metric("intelligence",ui->main_player_user_name->text(),progress_bar->value());
    else if(progress_bar == ui->progressBar_hunger)
        emit send_metric("hunger",ui->main_player_user_name->text(),progress_bar->value());



}

void MainWindow::change_metrics(int value, QProgressBar *progress_bar){
    if(progress_bar->value()+value>100)  progress_bar->setValue(100);

    else if(progress_bar->value()+value<0) {
        progress_bar->setValue(0);
        buttons_acces(false);
        QMessageBox::information(this,"Вы проиграли!","Игра закончена");
        ui->progressBar_happiness->setValue(0);
        ui->progressBar_intelligence->setValue(0);
        ui->progressBar_hunger->setValue(0);
        ui->lcdNumber->display(0);
        for(int i = 0;i<buttons.size();++i){
            buttons[i]->setVisible(false);
        }
        ui->pushButton_move_end->setVisible(false);
        emit bad_ending();
    }

    else {
        int k = 0;
        if(progress_bar->value()<50)
            k = value*(50+value)/50;
        else if(progress_bar->value()>50)
            k = value*(50-value)/50;
        else if(progress_bar->value() == 50)
            k = 1;
        progress_bar->setValue(progress_bar->value()+k);
    }

}

void MainWindow::change_metric(int value, const QString &metric, const QString &user_name){
    if(metric == "happiness"){
        if(ui->player_2->text() == user_name)
            ui->happiness_player_2->setValue(value);
        else if(ui->player_3->text() == user_name)
            ui->happiness_player_3->setValue(value);
        if(ui->player_4->text() == user_name)
            ui->happiness_player_4->setValue(value);
    }
    else if(metric == "intelligence"){
        if(ui->player_2->text() == user_name)
            ui->intelligence_player_2->setValue(value);
        else if(ui->player_3->text() == user_name)
            ui->intelligence_player_3->setValue(value);
        if(ui->player_4->text() == user_name)
            ui->intelligence_player_4->setValue(value);
    }
    else if(metric == "hunger"){
        if(ui->player_2->text() == user_name)
            ui->hunger_player_2->setValue(value);
        else if(ui->player_3->text() == user_name)
            ui->hunger_player_3->setValue(value);
        if(ui->player_4->text() == user_name)
            ui->hunger_player_4->setValue(value);
    }
    else if(metric == "money"){
        if(ui->player_2->text() == user_name)
            ui->money_player_2->display(value);
        else if(ui->player_3->text() == user_name)
            ui->money_player_3->display(value);
        if(ui->player_4->text() == user_name)
            ui->money_player_4->display(value);
    }
}
