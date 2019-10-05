
// RoboCmdDlg.h : fichier d'en-t�te
//

#pragma once
#include "afxwin.h"


// bo�te de dialogue CRoboCmdDlg
class CRoboCmdDlg : public CDialog
{
// Construction
public:
	CRoboCmdDlg(CWnd* pParent = NULL);	// constructeur standard

// Donn�es de bo�te de dialogue
	enum { IDD = IDD_ROBOCMD_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Prise en charge de DDX/DDV
  void Msg(const CString& s)
  {
	  m_msg.AddString(s);
	  //m_msg.InsertString(0,s);
      int count = 0;
	  count = m_msg.GetCount();
	  m_msg.SetCurSel(count - 1);
  }

// Impl�mentation
protected:
	HICON m_hIcon;

	// Fonctions g�n�r�es de la table des messages
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
  CButton m_act1;
  CButton m_act2;
  CButton m_act3;
  CButton m_act4;
  CButton m_quit;
  CListBox m_msg;
  afx_msg void OnBnClickedAction1();
  afx_msg void OnBnClickedAction2();
  afx_msg void OnBnClickedAction3();
  afx_msg void OnBnClickedAction4();
};
