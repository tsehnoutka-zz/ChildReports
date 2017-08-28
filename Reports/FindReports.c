/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "event.h"


int FindSeqNum(EventInfo *pEvent)
{
	printf("Process Report Find Sequence Number: %s\n",pEvent->data);
}

int FindTime(EventInfo *pEvent)
{
	printf("Process Report Find Time: %s\n",pEvent->data);
}

int FindSpecial(EventInfo *pEvent)
{
	printf("Process Report Find Special: %s\n",pEvent->data);
}

int FindMRI(EventInfo *pEvent)
{
	printf("Process Report Find MRI: %s\n",pEvent->data);
}
