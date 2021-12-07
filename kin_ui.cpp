#include "kin_ui.h"
#include "ui_kin_ui.h"

KIN_ui::KIN_ui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KIN_ui)
{
    ui->setupUi(this);
}

KIN_ui::~KIN_ui()
{
    delete ui;
}
