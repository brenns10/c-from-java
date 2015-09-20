/***************************************************************************//**

  @file         segfault.c

  @author       Stephen Brennan

  @date         Created Thursday, 17 September 2015

  @brief        It's just a function that segfaults :(

  @copyright    Copyright (c) 2015, Stephen Brennan.  Released under the Revised
                BSD License.  See LICENSE.txt for details.

*******************************************************************************/

#include <stdio.h>

void ex_segfault(void) {
  int *x = NULL;
  int y = *x;
  printf("*NULL=%d\n", y);
}
