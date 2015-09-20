/***************************************************************************//**

  @file         main.c

  @author       Stephen Brennan

  @date         Sunday, 20 September 2015

  @brief        Why you should only put declarations in headers.

*******************************************************************************/

#include <stdio.h>
#include "increment.h"

int main(int argc, char *argv[])
{
  printf("increment(1): %d\n", increment(1));
  other_function();
  return 0;
}
