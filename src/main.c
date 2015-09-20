/***************************************************************************//**

  @file         main.c

  @author       Stephen Brennan

  @date         Created Tuesday, 15 September 2015

  @brief        Main function for my "C from Java" talk examples.

  @copyright    Copyright (c) 2015, Stephen Brennan.  Released under the Revised
                BSD License.  See LICENSE.txt for details.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

#include "examples.h"

int main(int argc, char *argv[])
{
  if (argc < 2) {
    fprintf(stderr, "error: you must specify an example to run\n");
    return -1;
  }

  if (strcmp(argv[1], "static") == 0) {
    ex_static();
  } else if (strcmp(argv[1], "segfault") == 0) {
    ex_segfault();
  } else if (strcmp(argv[1], "fork") == 0) {
    ex_fork();
  } else if (strcmp(argv[1], "debug") == 0) {
    ex_debug();
  } else {
    fprintf(stderr, "error: example \"%s\" not found\n", argv[1]);
    return -1;
  }

  return 0;
}

