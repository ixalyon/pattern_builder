#include "configure.h"
#include "ui_configure.h"

Configure::Configure(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Configure)
{
    ui->setupUi(this);
}

Configure::~Configure()
{
    delete ui;
}
