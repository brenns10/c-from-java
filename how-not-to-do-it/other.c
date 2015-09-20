#include <stdio.h>
#include "increment.h"

void other_function(void)
{
  printf("I'm going to increment 5!\n");
  printf("Here it is: %d\n", increment(5));
}
