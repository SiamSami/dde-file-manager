/*
 * Copyright (C) 2016 ~ 2018 Deepin Technology Co., Ltd.
 *               2016 ~ 2018 dragondjf
 *
 * Author:     dragondjf<dingjiangfeng@deepin.com>
 *
 * Maintainer: dragondjf<dingjiangfeng@deepin.com>
 *             zccrs<zhangjide@deepin.com>
 *             Tangtong<tangtong@deepin.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "warnpage.h"
#include <QIcon>
#include <QVBoxLayout>
#include <QLabel>
#include <QPixmap>

WarnPage::WarnPage(QWidget *parent) : QFrame(parent)
{
    initUI();
}

void WarnPage::initUI()
{
    QVBoxLayout* mainLayout = new QVBoxLayout;
    QLabel* warnIconLabel = new QLabel(this);
    warnIconLabel->setPixmap(QIcon::fromTheme("dialog-information").pixmap(128, 128));
    QLabel* warnTextLabel = new QLabel(this);
    warnTextLabel->setWordWrap(true);
    QString warnText = tr("Formatting will erase all data on this disk, are you sure you want to continue? It cannot be restored.");
    warnTextLabel->setText(warnText);
    warnTextLabel->setWordWrap(true);
    warnTextLabel->setObjectName("StatusLabel");
    warnTextLabel->setAlignment(Qt::AlignHCenter);

    mainLayout->addSpacing(30);
    mainLayout->addWidget(warnIconLabel, 0, Qt::AlignHCenter);
    mainLayout->addSpacing(15);
    mainLayout->addWidget(warnTextLabel, 0, Qt::AlignHCenter);
    mainLayout->addStretch(1);
    setLayout(mainLayout);
    setContentsMargins(20, 0, 20, 0);
}
