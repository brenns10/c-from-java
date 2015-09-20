/***************************************************************************//**

  @file         fork.c

  @author       Stephen Brennan

  @date         Created Thursday, 17 September 2015

  @brief        A program that forks itself.

  @copyright    Copyright (c) 2015, Stephen Brennan.  Released under the Revised
                BSD License.  See LICENSE.txt for details.

*******************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h> // this defines pid_t

void ex_fork(void)
{
  pid_t pid = fork();

  if (pid == 0) {
    printf("I'm the child!\n");
    exit(EXIT_SUCCESS);
  } else if (pid < 0) {
    fprintf(stderr, "An error happened!\n");
  } else {
    printf("I'm the parent.  I created a child with pid=%d.\n", pid);
  }
}
