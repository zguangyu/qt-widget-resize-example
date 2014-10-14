#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->txtHeight, SIGNAL(returnPressed()),SLOT(refreshSize()));
    connect(ui->txtWidth, SIGNAL(returnPressed()),SLOT(refreshSize()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::refreshSize()
{
    int width = ui->txtWidth->text().toInt();
    int height = ui->txtHeight->text().toInt();
    ui->pushButton->resize(width, height);
}
