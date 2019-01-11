/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2013  SEGGER Microcontroller GmbH & Co. KG       *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V5.22 - Graphical user interface for embedded applications **
emWin is protected by international copyright laws.   Knowledge of the
source code may not be used to write a similar product.  This file may
only be used in accordance with a license and should not be re-
distributed in any way. We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : DIALOG_MessageBox.c
Purpose     : Example demonstrating GUI_MessageBox
----------------------------------------------------------------------
*/

#include "GUI.h"
#include "WM.h"

/*******************************************************************
*
*       Static code
*
********************************************************************
*/

/*********************************************************************
*
*       _cbBkWindow
*/
static void _cbBkWindow(WM_MESSAGE* pMsg) {
  switch (pMsg->MsgId) {
  case WM_PAINT:
    GUI_SetBkColor(GUI_RED);
    GUI_Clear();
    GUI_SetColor(GUI_WHITE);
    GUI_SetFont(&GUI_Font24_ASCII);
    GUI_DispStringHCenterAt("DIALOG_MessageBox - Sample", 160, 5);
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       MainTask
*/
void MainTask(void) {
  GUI_Init();
  #if GUI_SUPPORT_MEMDEV
    WM_SetCreateFlags(WM_CF_MEMDEV);
  #endif
  WM_SetCallback(WM_HBKWIN, &_cbBkWindow);
  /* Create message box and wait until it is closed */
  while (1) {
    GUI_MessageBox("This text is shown\nin a message box",
                   "Caption/Title", GUI_MESSAGEBOX_CF_MOVEABLE);
    GUI_Delay(750);                    /* Wait for a short moment ... */
    GUI_MessageBox("New message !",
                   "Caption/Title", GUI_MESSAGEBOX_CF_MOVEABLE);
    GUI_Delay(750);
  }
}

/*************************** End of file ****************************/

