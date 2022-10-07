/*******************************************************************************
  * File Name          : simpleMonitor.c
  * Description        : Purpose of the project is to ensure hardware/software interface working
  *		In linux environment.
  * 
  * Author:              Group 1 
  *			 Sinan KARACA
  *			 Mohammed Al Bunde
  * Date:                22.09.2021				 
  ******************************************************************************
  */

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#include "common.h"


ParserReturnVal_t CmdAssign1(int action)
{

  if(action==CMD_SHORT_HELP) return CmdReturnOk;
  if(action==CMD_LONG_HELP) {
    printf("testasm\n\n"
	   "This command tests the addition of a command into armon interface\n"
	   );

    return CmdReturnOk;
  }
  // Only prints the Hey it works!
  // Whenever run the code from terminal
  
  printf("Hey it works!\n");

  return CmdReturnOk;
}

// The command to run the code
ADD_CMD("cmdassign1",CmdAssign1,"Test for a assign1")



