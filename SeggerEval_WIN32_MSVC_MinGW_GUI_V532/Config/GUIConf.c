/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2015  SEGGER Microcontroller GmbH & Co. KG       *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V5.32 - Graphical user interface for embedded applications **
emWin is protected by international copyright laws.   Knowledge of the
source code may not be used to write a similar product.  This file may
only  be used  in accordance  with  a license  and should  not be  re-
distributed in any way. We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : GUIConf.c
Purpose     : Display controller initialization
---------------------------END-OF-HEADER------------------------------
*/

#include "GUI.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
//
// Define the available number of bytes available for the GUI
//
#define GUI_NUMBYTES  0x400000
//
// Define the average block size
//
#define GUI_BLOCKSIZE 0x80

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       GUI_X_Config
*
* Purpose:
*   Called during the initialization process in order to set up the
*   available memory for the GUI.
*/
void GUI_X_Config(void) {
  //
  // 32 bit aligned memory area
  //
  static U32 aMemory[GUI_NUMBYTES / 4];/*������һ���� С Ϊ 4MB(0x400000) �� �� ̬ �� ��*/
  //
  // Assign memory to emWin
  //�� �� emWin �� �� �� ��GUI_ALLOC_AssignMemory �� �� �� �� �� �� �� �� emWin �� 
  //�� ʹ �� �� �� ��GUI_ALLOC_SetAvBlockSize ���ô洢���ƽ����С�� 
  //���� emWin �Ŀ⺯��ʹ�õĴ洢�ռ䶼�� aMemory �з���ġ���Ƕ��ʽƽ̨�ϣ�
  //������Ҫ���������ƿ��Ʒ���� emWin ��� aMemory ��С���޸ĺ� GUI_NUMBYTES ���ɡ� 
  //�������ǵĲ��ԣ� STemWin ����ʾ��
//���ڱ��� STM3 ������ƽ̨��ʹ�� 43KB �����������С�
  //
  GUI_ALLOC_AssignMemory(aMemory, GUI_NUMBYTES);
  GUI_ALLOC_SetAvBlockSize(GUI_BLOCKSIZE);
}

/*************************** End of file ****************************/
