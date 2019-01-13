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
  static U32 aMemory[GUI_NUMBYTES / 4];/*申请了一个大 小 为 4MB(0x400000) 的 静 态 空 间*/
  //
  // Assign memory to emWin
  //调 用 emWin 的 库 函 数GUI_ALLOC_AssignMemory 把 这 个 空 间 分 配 给 emWin ， 
  //并 使 用 库 函 数GUI_ALLOC_SetAvBlockSize 设置存储块的平均大小。 
  //所以 emWin 的库函数使用的存储空间都是 aMemory 中分配的。在嵌入式平台上，
  //我们需要根据其限制控制分配给 emWin 库的 aMemory 大小，修改宏 GUI_NUMBYTES 即可。 
  //根据我们的测试， STemWin 的演示例
//程在秉火 STM3 开发板平台上使用 43KB 即可正常运行。
  //
  GUI_ALLOC_AssignMemory(aMemory, GUI_NUMBYTES);
  GUI_ALLOC_SetAvBlockSize(GUI_BLOCKSIZE);
}

/*************************** End of file ****************************/
