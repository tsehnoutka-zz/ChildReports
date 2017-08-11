#include <stdio.h>
#include "event.h"
int reportY(EventInfo *pEvent)
{
	printf("Process Report Y: %s\n",pEvent->data);
}