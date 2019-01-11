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
File        : 320_Overview_Whirlpool_B.c
Content     : Bitmap 24 * 15
---------------------------END-OF-HEADER------------------------------
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif


static GUI_CONST_STORAGE unsigned short ac320_Overview_Whirlpool_B[] = {
  0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x318D, 0x09F3, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0CA6, 0x6B5A, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF,
  0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x56B5, 0x0CE9, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0A57, 0x1CE7, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF,
  0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x14A6, 0x0ABC, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0D6E, 0x4E73, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF,
  0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x39CE, 0x0D90, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0AFD, 0x1064, 0x739C, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF,
  0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x6319, 0x0CC7, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0A15, 0x2D4B, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF,
  0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x1CE7, 0x0A78, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0D2B, 0x56B5, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF, 0x7FFF,
  0x1CE7, 0x1064, 0x1064, 0x1064, 0x1064, 0x1064, 0x1064, 0x1064, 0x0A15, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0CE9, 0x1064, 0x1064, 0x1064, 0x1064, 0x1064, 0x1064, 0x1064, 0x0C63,
  0x1064, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0DD1, 0x0842,
  0x1064, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0DD1, 0x0842,
  0x1064, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0DD1, 0x0842,
  0x1064, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0DD1, 0x0842,
  0x1064, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0DD1, 0x0842,
  0x1064, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x071F, 0x0DD1, 0x0842,
  0x1064, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0DD1, 0x0D2B, 0x0842,
  0x14A5, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842, 0x0842
};

GUI_CONST_STORAGE GUI_BITMAP bm320_Overview_Whirlpool_B = {
  24, /* XSize */
  15, /* YSize */
  48, /* BytesPerLine */
  16, /* BitsPerPixel */
  (unsigned char *)ac320_Overview_Whirlpool_B,  /* Pointer to picture data */
  NULL  /* Pointer to palette */
 ,GUI_DRAW_BMP555
};

/*************************** End of file ****************************/
