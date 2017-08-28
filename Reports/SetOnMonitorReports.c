/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "event.h"


int SetOnStationMonitor(EventInfo *pEvent)
{
	printf("Process Report Set On Station Monitor: %s\n",pEvent->data);
}

int SetOnFLOG_Monitor(EventInfo *pEvent)
{
	printf("Process Report Set On FLOG Monitor: %s\n",pEvent->data);
}

int SetOnFLOG_View(EventInfo *pEvent)
{
	printf("Process Report Set On FLOG View: %s\n",pEvent->data);
}
