#include <stdio.h>
#include "event.h"

int StationActivity(EventInfo *pEvent)
{
	printf("Process Report Station Activity: %s\n",pEvent->data);
}
int StationConfiguration(EventInfo *pEvent)
{
	printf("Process Report Station Configuration: %s\n",pEvent->data);
}

int StationDAC(EventInfo *pEvent)
{
	printf("Process Report Station DAC: %s\n",pEvent->data);
}
int StationExceptions(EventInfo *pEvent)
{
	printf("Process Report Station Exceptions: %s\n",pEvent->data);
}
int StationInformation(EventInfo *pEvent)
{
	printf("Process Report Station Information: %s\n",pEvent->data);
}
int StationList(EventInfo *pEvent)
{
	printf("Process Report Station List: %s\n",pEvent->data);
}
int StationORI(EventInfo *pEvent)
{
	printf("Process Report Station ORI: %s\n",pEvent->data);
}
int StationStatus(EventInfo *pEvent)
{
	printf("Process Report Station Status: %s\n",pEvent->data);
}
int StationTotals(EventInfo *pEvent)
{
	printf("Process Report Station Totals: %s\n",pEvent->data);
}