#include <stdio.h>
#include "ReportsIL.h"
#include "reportStruct.h"
//  in ILLINOIS

#define NUM_REPORTS 3
ReportInfo ILreports[NUM_REPORTS];
#define OFFSET 500


int initSpecial()
{
    ILreports[0] = (ReportInfo){500,"reportX", "ILLINOIS Report X", reportX,0};
    ILreports[1] = (ReportInfo){501,"reportY", "ILLINOIS Report Y", reportY,0};
    ILreports[2] = (ReportInfo){502,"reportZ", "ILLINOIS Report Z", reportZ,0};
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

int getSpecialReportCount()
{
    return NUM_REPORTS;
}

ReportInfo* getSpecialReports(){
    return (ReportInfo*)&ILreports;
}


