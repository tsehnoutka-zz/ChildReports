/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "event.h"


int DesktopAgencyConfiguration(EventInfo *pEvent)
{
	printf("Process Report Desktop Agency Configuration: %s\n",pEvent->data);
}
int DesktopLicenseConfiguration(EventInfo *pEvent)
{
	printf("Process Report Desktop License Configuration: %s\n",pEvent->data);
}

int DesktopLicenseExceptions(EventInfo *pEvent)
{
	printf("Process Report Desktop License Exceptions: %s\n",pEvent->data);
}