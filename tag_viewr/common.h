//HAndle the header file iteration
#ifndef COMMON_H
#define COMMON_H

//Include header file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DATA_NOT_FOUND
};

//Declare Prototypes
int edit(char *origin_fil, char *action, char *change);

#endif