#include <stdio.h>
#include "event.h"

int reportA(EventInfo *pEvent)
{
	printf("Process Common Report A: %s\n",pEvent->data);
}