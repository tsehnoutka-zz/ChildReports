/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "event.h"

int ComputerConfiguration(EventInfo *pEvent)
{
	printf("Process Report Computer Configuration: %s\n",pEvent->data);
}
int ComputerStatus(EventInfo *pEvent)
{
	printf("Process Report Computer Status: %s\n",pEvent->data);
}
int ComputerExceptions(EventInfo *pEvent)
{
	printf("Process Report Computer Exception: %s\n",pEvent->data);
}