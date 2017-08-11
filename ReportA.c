#include <stdio.h>
#include "event.h"
int reportA(EventInfo *pEvent)
{
	printf("Process Report A: %s\n",pEvent->data);
}