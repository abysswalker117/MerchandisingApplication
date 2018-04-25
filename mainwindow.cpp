#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "GondolaParts.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_calc_gondola_clicked()
{
    //declaring numAisles, gondolaFootage to user input
    int num_aisles = ui->l_num_aisles->text().toInt();
    int total_length_aisles = ui->l_gondola_length->text().toInt();

     GondolaParts new_gondola_parts(num_aisles, total_length_aisles);



    //calling GondolaPartsCalulator to calculate parts count;

    //write variables to LineEdits

    //right uprights
    ui->l_right_upright_qty->setText(QString::number(new_gondola_parts.get_right_upright_qty()));
    //left uprights
    ui->l_left_upright_qty->setText(QString::number(new_gondola_parts.get_left_upright_qty()));
    //center uprights
    ui->l_center_upright_qty->setText(QString::number(new_gondola_parts.get_center_upright_qty()));
    //top cap
    ui->l_top_cap_qty->setText(QString::number(new_gondola_parts.get_top_cap()));
    //spacers
    ui->l_spacer_qty->setText(QString::number(new_gondola_parts.get_spacers()));
    //pegstop
    ui->l_peg_stop_qty->setText(QString::number(new_gondola_parts.get_peg_stop()));
    //toe kick
    ui->l_toe_kick_qty->setText(QString::number(new_gondola_parts.get_toe_kick()));
    //pegboard
    ui->l_peg_board_qty->setText(QString::number(new_gondola_parts.get_peg_board()));

}

