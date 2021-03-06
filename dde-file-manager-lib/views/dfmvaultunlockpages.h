/*
 * Copyright (C) 2019 Deepin Technology Co., Ltd.
 *
 * Author:     Gary Wang <wzc782970009@gmail.com>
 *
 * Maintainer: Gary Wang <wangzichong@deepin.com>
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
#pragma once

#include "interface/dfmvaultcontentinterface.h"
#include "dtkwidget_global.h"

DWIDGET_BEGIN_NAMESPACE
class DPasswordEdit;
class DFloatingButton;
class DCommandLinkButton;
DWIDGET_END_NAMESPACE

DWIDGET_USE_NAMESPACE

DFM_BEGIN_NAMESPACE

class DFMVaultUnlockPages : public DFMVaultContentInterface
{
    Q_OBJECT
public:
    DFMVaultUnlockPages(QWidget * parent = nullptr);
    ~DFMVaultUnlockPages() override {}

    QPair<DUrl, bool> requireRedirect(VaultController::VaultState state) override;
    void setRootUrl(const DUrl & url) override;

private slots:
    void unlock();

private:
    DPasswordEdit * m_passwordEdit;
    DFloatingButton * m_unlockButton;
    DCommandLinkButton * m_retrievePasswordButton;
};

DFM_END_NAMESPACE
