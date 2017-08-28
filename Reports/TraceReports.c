/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "event.h"


int TraceSeqNum(EventInfo *pEvent)
{
	printf("Process Report Trace Sequence Number: %s\n",pEvent->data);
}

int TraceTime(EventInfo *pEvent)
{
	printf("Process Report Trace TIme: %s\n",pEvent->data);
}

int TraceSpecial(EventInfo *pEvent)
{
	printf("Process Report Trace Special: %s\n",pEvent->data);
}

int TraceMRI(EventInfo *pEvent)
{
	printf("Process Report Trace MRI: %s\n",pEvent->data);
}

int TraceCommandConfiguration(EventInfo *pEvent)
{
	printf("Process Report Trace Command Configuration: %s\n",pEvent->data);
}

int TraceNetworkEvents(EventInfo *pEvent)
{
	printf("Process Report Trace Network Events: %s\n",pEvent->data);
}

int TraceError(EventInfo *pEvent)
{
	printf("Process Report Trace Error: %s\n",pEvent->data);
}

