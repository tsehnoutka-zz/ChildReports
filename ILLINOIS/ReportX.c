#include <stdio.h>
#include "event.h"
int reportX(EventInfo *pEvent)
{
	printf("Process Report X: %s\n",pEvent->data);
}
