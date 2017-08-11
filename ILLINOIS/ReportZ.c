#include <stdio.h>
#include "event.h"
int reportZ(EventInfo *pEvent)
{
	printf("Process Report Z: %s\n",pEvent->data);
}