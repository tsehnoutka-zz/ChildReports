/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "event.h"


int MHS_Hourly(EventInfo *pEvent)
{
	printf("Process Report Message History Statistics - Hourly %s\n",pEvent->data);
}
int MHS_Weekly(EventInfo *pEvent)
{
	printf("Process ReportMessage History Statistics - Weekly %s\n",pEvent->data);
}