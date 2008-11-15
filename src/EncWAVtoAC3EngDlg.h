﻿//
// WAV to AC3 Encoder
// Copyright (C) 2007-2008 Wiesław Šoltés <wieslaw.soltes@gmail.com>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; version 2 of the License.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

/* $Id$ */

#pragma once

#include "afxcmn.h"
#include "afxwin.h"

#include "ProgramConfig.h"
#include "ResizeDialog.h"

#include "MyButton.h"
#include "MyStatic.h"
#include "MyEdit.h"
#include "MyComboBoxEdit.h"
#include "MyListCtrl.h"
#include "MyComboBox.h"
#include "MySliderCtrl.h"

#include "EncoderOptions.h"

class CEncWAVtoAC3EngDlg : public CDialog
{
	DECLARE_DYNAMIC(CEncWAVtoAC3EngDlg)
public:
	CEncWAVtoAC3EngDlg(CWnd* pParent = NULL);
	virtual ~CEncWAVtoAC3EngDlg();
	enum { IDD = IDD_ENGINES_DIALOG };
protected:
	virtual void DoDataExchange(CDataExchange* pDX);
	DECLARE_MESSAGE_MAP()
public:
    CListCtrl m_LstEngines;
    CEdit m_EdtEngineName;
    CEdit m_EdtEnginePath;
    virtual BOOL OnInitDialog();
};