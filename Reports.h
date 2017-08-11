#ifndef REPORTS_H
#define REPORTS_H

#include <stdio.h>
#include <string.h>
#include "event.h"

int reportA(EventInfo *pEvent);
int reportB(EventInfo *pEvent);
int checkForSpclCode(EventInfo *pEvent);
int initSpecial();



#endif