/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "event.h"

int ListMail(EventInfo *pEvent)
{
	printf("Process Report List Mail %s\n",pEvent->data);
}