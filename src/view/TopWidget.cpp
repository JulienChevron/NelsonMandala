//
// Created by chevron on 12/03/19.
//

#include "include/view/TopWidget.hpp"


TopWidget::TopWidget(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::TopWidget)
{
    ui->setupUi(this);
}