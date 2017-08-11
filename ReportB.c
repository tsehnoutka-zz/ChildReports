#include <stdio.h>
#include "event.h"
int reportB(EventInfo *pEvent)
{
	printf("Process Report B: %s\n",pEvent->data);
}