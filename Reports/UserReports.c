#include <stdio.h>
#include "event.h"

int UserConfiguration(EventInfo *pEvent)
{
	printf("Process Report User Configuration: %s\n",pEvent->data);
}
int UserException(EventInfo *pEvent)
{
	printf("Process Report User Exception: %s\n",pEvent->data);
}

int UserStatus(EventInfo *pEvent)
{
	printf("Process Report User Status: %s\n",pEvent->data);
}