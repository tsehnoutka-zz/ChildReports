#include <stdio.h>
#include "event.h"
int reportA(EventInfo *pEvent)
{
	printf("Process Special Report A in ILLINOIS: %s\n",pEvent->data);
}