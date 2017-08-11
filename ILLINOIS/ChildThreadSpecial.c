#include <stdio.h>
#include "ReportsIL.h"
#include "reportStruct.h"
//  in ILLINOIS

#define NUM_REPORTS 3
ReportInfo ILreports[NUM_REPORTS];
#define OFFSET 100

int sendFoxTalkReportList_IL()
{
    // call lstrsend() and send it the name for each report ??
    // send them one at a time and have fxtalk put them together?
    // fxtalk will also have to get this for the specific state reports  ??
 
}
int initSpecial()
{
    ILreports[0] = (ReportInfo){0,"reportX", reportX};
    ILreports[1] = (ReportInfo){1,"reportY", reportY};
    ILreports[2] = (ReportInfo){2,"reportZ", reportZ};
   
    sendFoxTalkReportList_IL();
}

int checkForSpclCode(EventInfo *pEvent)
{
    int specificType = pEvent->reportID-OFFSET;
        
    //  if type is found in array call function
    if (0<=specificType && NUM_REPORTS  > specificType){
        (*ILreports[specificType].pReportFunction) (pEvent);  
        return 1;
    }
    //  else it is not a state specific function
    return 0;
    }


