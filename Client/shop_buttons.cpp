#include "mainwindow.h"
#include "./ui_mainwindow.h"

void MainWindow::on_pushButton_book_clicked(){
    if(change_money(200,ui->pushButton_book,ui->lcdNumber)) {

        change_metrics(5,ui->pushButton_book,ui->progressBar_happiness);
        change_metrics(5,ui->pushButton_book,ui->progressBar_intelligence);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
};

void MainWindow::on_pushButton_courses_clicked()
{
    if(change_money(15000,ui->pushButton_courses,ui->lcdNumber)) {

        change_metrics(-10,ui->pushButton_courses,ui->progressBar_happiness);
        change_metrics(40,ui->pushButton_courses,ui->progressBar_intelligence);
        ui->pushButton_courses->setVisible(false);
        ui->label_courses->setText("Куплено");
        salary+=15000;
    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_gdz_clicked()
{
    if(change_money(3500,ui->pushButton_gdz,ui->lcdNumber)) {

        change_metrics(10,ui->pushButton_gdz,ui->progressBar_happiness);
        change_metrics(-10,ui->pushButton_gdz,ui->progressBar_intelligence);



    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_chips_clicked()
{
    if(change_money(80,ui->pushButton_chips,ui->lcdNumber)) {

        change_metrics(3,ui->pushButton_chips,ui->progressBar_happiness);
        change_metrics(5,ui->pushButton_chips,ui->progressBar_hunger);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_energy_clicked()
{
    if(change_money(100,ui->pushButton_energy,ui->lcdNumber)) {

        change_metrics(15,ui->pushButton_energy,ui->progressBar_happiness);
        change_metrics(-10,ui->pushButton_energy,ui->progressBar_hunger);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_vegetables_clicked()
{
    if(change_money(150,ui->pushButton_vegetables,ui->lcdNumber)) {

        change_metrics(-3,ui->pushButton_vegetables,ui->progressBar_happiness);
        change_metrics(15,ui->pushButton_vegetables,ui->progressBar_hunger);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_hat_clicked()
{
    if(change_money(1000,ui->pushButton_hat,ui->lcdNumber)) {

        change_metrics(5,ui->pushButton_hat,ui->progressBar_happiness);
        change_metrics(3,ui->pushButton_hat,ui->progressBar_hunger);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_coat_clicked()
{
    if(change_money(15000,ui->pushButton_coat,ui->lcdNumber)) {

        change_metrics(15,ui->pushButton_coat,ui->progressBar_happiness);
        change_metrics(5,ui->pushButton_coat,ui->progressBar_hunger);
        ui->pushButton_coat->setVisible(false);
        ui->label_coat->setText("Куплено");
        if(move_number>10 && ui->label_jacket->text()!="Куплено")
            wastes -= 400;
    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_jacket_clicked()
{
    if(change_money(20000,ui->pushButton_jacket,ui->lcdNumber)) {

        change_metrics(10,ui->pushButton_jacket,ui->progressBar_happiness);
        change_metrics(10,ui->pushButton_jacket,ui->progressBar_hunger);
        ui->pushButton_jacket->setVisible(false);
        ui->label_jacket->setText("Куплено");
        if(move_number>10 && ui->label_coat->text()!="Куплено")
            wastes -= 400;

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_laptop_clicked()
{
    if(change_money(50000,ui->pushButton_energy,ui->lcdNumber)) {

        change_metrics(40,ui->pushButton_laptop,ui->progressBar_happiness);
        change_metrics(30,ui->pushButton_laptop,ui->progressBar_intelligence);
        ui->pushButton_laptop->setVisible(false);
        ui->label_laptop->setText("Куплено");
        salary+=10000;
    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_phone_clicked()
{
    if(change_money(10000,ui->pushButton_phone,ui->lcdNumber)) {

        change_metrics(20,ui->pushButton_phone,ui->progressBar_happiness);
        change_metrics(-10,ui->pushButton_phone,ui->progressBar_intelligence);
        ui->pushButton_phone->setVisible(false);
        ui->label_phone->setText("Куплено");



    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_mouse_clicked()
{
    if(change_money(1000,ui->pushButton_phone,ui->lcdNumber)) {

        change_metrics(10,ui->pushButton_phone,ui->progressBar_happiness);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_headphones_clicked()
{
    if(change_money(6000,ui->pushButton_headphones,ui->lcdNumber)) {

        change_metrics(20,ui->pushButton_headphones,ui->progressBar_happiness);
        ui->pushButton_headphones->setVisible(false);
        ui->label_headphones->setText("Куплено");
    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_keyboard_clicked()
{
    if(change_money(2000,ui->pushButton_keyboard,ui->lcdNumber)) {

        change_metrics(7,ui->pushButton_keyboard,ui->progressBar_happiness);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_teapot_clicked()
{
    if(change_money(1500,ui->pushButton_teapot,ui->lcdNumber)) {

        change_metrics(8,ui->pushButton_teapot,ui->progressBar_happiness);
        ui->pushButton_teapot->setVisible(false);
        ui->label_teapot->setText("Куплено");
    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_robot_cleaner_clicked()
{
    if(change_money(16000,ui->pushButton_robot_cleaner,ui->lcdNumber)) {

        change_metrics(30,ui->pushButton_robot_cleaner,ui->progressBar_happiness);
        ui->pushButton_robot_cleaner->setVisible(false);
        ui->label_robot_cleaner->setText("Куплено");
    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_fridge_clicked()
{
    if(change_money(46000,ui->pushButton_fridge,ui->lcdNumber)) {

        change_metrics(40,ui->pushButton_fridge,ui->progressBar_happiness);
        ui->pushButton_fridge->setVisible(false);
        ui->label_fridge->setText("Куплено");
        hunger_decrease-=10;
        if(hunger_decrease<0)
            hunger_decrease = 0;
    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_microwave_clicked()
{
    if(change_money(3000,ui->pushButton_microwave,ui->lcdNumber)) {

        change_metrics(20,ui->pushButton_microwave,ui->progressBar_happiness);
        ui->pushButton_microwave->setVisible(false);
        ui->label_microwave->setText("Куплено");
    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_dishwasher_clicked()
{
    if(change_money(25000,ui->pushButton_dishwasher,ui->lcdNumber)) {

        change_metrics(27,ui->pushButton_dishwasher,ui->progressBar_happiness);
        ui->pushButton_dishwasher->setVisible(false);
        ui->label_dishwasher->setText("Куплено");
    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_coursework_clicked()
{
    if(change_money(600,ui->pushButton_coursework,ui->lcdNumber)) {

        change_metrics(10,ui->pushButton_coursework,ui->progressBar_happiness);
        change_metrics(3,ui->pushButton_coursework,ui->progressBar_intelligence);
        ui->pushButton_coursework->setVisible(false);
        ui->label_coursework->setText("Куплено");
    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_office_supplies_clicked(){

    if(change_money(900,ui->pushButton_office_supplies,ui->lcdNumber)) {

        change_metrics(10,ui->pushButton_office_supplies,ui->progressBar_happiness);
        change_metrics(5,ui->pushButton_office_supplies,ui->progressBar_intelligence);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");

}

void MainWindow::on_pushButton_ms_clicked()
{
    if(change_money(1500,ui->pushButton_ms,ui->lcdNumber)) {

        change_metrics(-5,ui->pushButton_ms,ui->progressBar_happiness);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_bag_clicked()
{
    if(change_money(2000,ui->pushButton_bag,ui->lcdNumber)) {

        change_metrics(15,ui->pushButton_bag,ui->progressBar_happiness);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_scientific_journal_clicked()
{
    if(change_money(30,ui->pushButton_scientific_journal,ui->lcdNumber)) {

        change_metrics(3,ui->pushButton_scientific_journal,ui->progressBar_intelligence);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_rolls_clicked()
{
    if(change_money(900,ui->pushButton_rolls,ui->lcdNumber)) {

        change_metrics(50,ui->pushButton_rolls,ui->progressBar_happiness);
        change_metrics(30,ui->pushButton_rolls,ui->progressBar_hunger);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_pizza_clicked()
{
    if(change_money(850,ui->pushButton_pizza,ui->lcdNumber)) {

        change_metrics(50,ui->pushButton_pizza,ui->progressBar_happiness);
        change_metrics(20,ui->pushButton_pizza,ui->progressBar_hunger);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_coffee_clicked()
{
    if(change_money(200,ui->pushButton_pizza,ui->lcdNumber)) {

        change_metrics(-2,ui->pushButton_pizza,ui->progressBar_happiness);
        change_metrics(15,ui->pushButton_pizza,ui->progressBar_hunger);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_cola_clicked()
{
    if(change_money(60,ui->pushButton_cola,ui->lcdNumber)) {

        change_metrics(5,ui->pushButton_cola,ui->progressBar_happiness);
        change_metrics(-2,ui->pushButton_cola,ui->progressBar_hunger);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_sandwich_clicked()
{
    if(change_money(30,ui->pushButton_sandwich,ui->lcdNumber)) {

        change_metrics(3,ui->pushButton_sandwich,ui->progressBar_hunger);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_bun_clicked()
{
    if(change_money(50,ui->pushButton_bun,ui->lcdNumber)) {

        change_metrics(4,ui->pushButton_bun,ui->progressBar_happiness);
        change_metrics(3,ui->pushButton_bun,ui->progressBar_hunger);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_hoodies_clicked()
{
    if(change_money(6000,ui->pushButton_hoodies,ui->lcdNumber)) {

        change_metrics(15,ui->pushButton_hoodies,ui->progressBar_happiness);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_t_shirt_clicked()
{
    if(change_money(3000,ui->pushButton_t_shirt,ui->lcdNumber)) {

        change_metrics(5,ui->pushButton_t_shirt,ui->progressBar_happiness);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_sneakers_clicked()
{
    if(change_money(12000,ui->pushButton_sneakers,ui->lcdNumber)) {

        change_metrics(20,ui->pushButton_sneakers,ui->progressBar_happiness);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_socks_clicked()
{
    if(change_money(800,ui->pushButton_socks,ui->lcdNumber)) {

        change_metrics(5,ui->pushButton_socks,ui->progressBar_happiness);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_cap_clicked()
{
    if(change_money(12000,ui->pushButton_cap,ui->lcdNumber)) {

        change_metrics(15,ui->pushButton_cap,ui->progressBar_happiness);

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}

void MainWindow::on_pushButton_uniform_clicked()
{
    if(change_money(3000,ui->pushButton_uniform,ui->lcdNumber)) {

        change_metrics(5,ui->pushButton_uniform,ui->progressBar_happiness);
        change_metrics(15,ui->pushButton_uniform,ui->progressBar_intelligence);
        ui->pushButton_uniform->setVisible(false);
        ui->label_uniform->setText("Куплено");

    }

    else QMessageBox::about(this,"Oшибка","У вас нет денег");
}



