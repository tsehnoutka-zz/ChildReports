#ifndef REPORT_STRUCT_H
#define REPORT_STRUCT_H
#include "event.h"

typedef struct Report{
    int ID;
    char *name;
    int (*pReportFunction)(EventInfo *pEvent);
}ReportInfo;


#endif