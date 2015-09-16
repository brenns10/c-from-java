/***************************************************************************//**

  @file         static.c

  @author       Stephen Brennan

  @date         Created Tuesday, 15 September 2015

  @brief        Example demonstrating how static variables work!

  @copyright    Copyright (c) 2015, Stephen Brennan.  Released under the Revised
                BSD License.  See LICENSE.txt for details.

*******************************************************************************/

#include <stdio.h>

int hi_im_static = 1;

static void me_too(void)
{
  /* The only difference between this and other types of functions is that this
     one can only be used within static.c. */

  static int static_local = 1;
  int stack_local = 1;
  hi_im_static++;
  static_local++;
  stack_local++;
  printf("hi_im_static: %d\n", hi_im_static);
  printf("static_local: %d\n", static_local);
  printf("stack_local: %d\n", stack_local);
  printf("\n");
}

void ex_static(void)
{
  me_too();
  me_too();
  me_too();
}
