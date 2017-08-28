#ifndef REPORT_STRUCT_H
#define REPORT_STRUCT_H
#include "event.h"

typedef struct Report{
    int ID;       //  the unique ID for this report
    char *name;   //  the name of the report
    char *desc;   //  the description of the report
    int (*pReportFunction)(EventInfo *pEvent);   //  the function pointer to process this particular report request
    int streamingCount;  //  Incremented each time a streaming request comes in for this report.  decremented when they close the request
    //  do I need to add a pointer to an array to hold the intervals for streaming.  ??
    //  or do i need a dynamic array of struct that contains the interval AND the destination.  
    //  I'm thinking pointer to save space with so many empty records.
}ReportInfo;


#endif