#include <stdio.h>
#include "event.h"

int reportX(EventInfo *pEvent)
{
	printf("Process Report X: %s\n",pEvent->data);
}

int reportY(EventInfo *pEvent)
{
	printf("Process Report Y: %s\n",pEvent->data);
}

int reportZ(EventInfo *pEvent)
{
	printf("Process Report Z: %s\n",pEvent->data);
}