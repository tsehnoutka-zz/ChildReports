/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "event.h"

int PerformanceCPU(EventInfo *pEvent)
{
	printf("Process Report Performance CPU: %s\n",pEvent->data);
}
int PerformanceMessageQueue(EventInfo *pEvent)
{
	printf("Process Report Performance Message Queue: %s\n",pEvent->data);
}
int PerformanceMessageThroughput(EventInfo *pEvent)
{
	printf("Process Report Performance Message Throughput: %s\n",pEvent->data);
}
int PerformanceNetworkUsage(EventInfo *pEvent)
{
	printf("Process Report Performance Network Usage: %s\n",pEvent->data);
}
