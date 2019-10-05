
// RoboCmdDlg.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "RoboCmd.h"
#include "RoboCmdDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// boîte de dialogue CRoboCmdDlg




CRoboCmdDlg::CRoboCmdDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRoboCmdDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CRoboCmdDlg::DoDataExchange(CDataExchange* pDX)
{
  CDialog::DoDataExchange(pDX);
  DDX_Control(pDX, IDC_Action1, m_act1);
  DDX_Control(pDX, IDC_Action2, m_act2);
  DDX_Control(pDX, IDC_Action3, m_act3);
  DDX_Control(pDX, IDC_Action4, m_act4);
  DDX_Control(pDX, IDOK, m_quit);
  DDX_Control(pDX, IDC_MSG, m_msg);
}

BEGIN_MESSAGE_MAP(CRoboCmdDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
  ON_BN_CLICKED(IDC_Action1, &CRoboCmdDlg::OnBnClickedAction1)
  ON_BN_CLICKED(IDC_Action2, &CRoboCmdDlg::OnBnClickedAction2)
  ON_BN_CLICKED(IDC_Action3, &CRoboCmdDlg::OnBnClickedAction3)
  ON_BN_CLICKED(IDC_Action4, &CRoboCmdDlg::OnBnClickedAction4)
END_MESSAGE_MAP()


// gestionnaires de messages pour CRoboCmdDlg

BOOL CRoboCmdDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
  
	// Définir l'icône de cette boîte de dialogue. L'infrastructure effectue cela automatiquement
	//  lorsque la fenêtre principale de l'application n'est pas une boîte de dialogue
	SetIcon(m_hIcon, TRUE);			// Définir une grande icône
	SetIcon(m_hIcon, FALSE);		// Définir une petite icône
  Msg(_T("Demarrage de la communication avec le robot ..."));
	// TODO : ajoutez ici une initialisation supplémentaire

	return TRUE;  // retourne TRUE, sauf si vous avez défini le focus sur un contrôle
}

// Si vous ajoutez un bouton Réduire ?votre boîte de dialogue, vous devez utiliser le code ci-dessous
//  pour dessiner l'icône. Pour les applications MFC utilisant le modèle Document/Vue,
//  cela est fait automatiquement par l'infrastructure.

void CRoboCmdDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // contexte de périphérique pour la peinture

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Centrer l'icône dans le rectangle client
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Dessiner l'icône
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// Le système appelle cette fonction pour obtenir le curseur ?afficher lorsque l'utilisateur fait glisser
//  la fenêtre réduite.
HCURSOR CRoboCmdDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void Sleep1(int iSeconds)
{
    int i = 0;

    for(i = 0; i < iSeconds*10; i++)
    {
        MSG msg;
        //while(TRUE)
        {
            while(PeekMessage(&msg, NULL, NULL, NULL, PM_REMOVE))
            {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }

        ::Sleep(100);
    }
}
void CRoboCmdDlg::OnBnClickedAction1()
{
    Msg(_T("D¨¦but action 1"));
    Sleep1(1);
    Msg(_T("Fin action 1"));

  // TODO : ajoutez ici le code de votre gestionnaire de notification de contrôle
}

void CRoboCmdDlg::OnBnClickedAction2()
{
      Msg(_T("D¨¦but action 2"));
      Sleep1(1);
      Msg(_T("Fin action 2"));
	  //int count = 0;
	  //count = m_msg.GetCount();
	  //m_msg.SetCurSel(count - 1);
  // TODO : ajoutez ici le code de votre gestionnaire de notification de contrôle
}

void CRoboCmdDlg::OnBnClickedAction3()
   
{ 
    Msg(_T("D¨¦but action 3"));
    Sleep1(1);
    Msg(_T("Fin action 3"));
  // TODO : ajoutez ici le code de votre gestionnaire de notification de contrôle
}

void CRoboCmdDlg::OnBnClickedAction4()
{
      Msg(_T("D¨¦but action 4"));
      Sleep1(1);
      Msg(_T("Fin action 4"));
  // TODO : ajoutez ici le code de votre gestionnaire de notification de contrôle
}
