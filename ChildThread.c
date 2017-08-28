#include "ChildThread.h"

int sendFoxTalkReportList()
{
    int spclCount = getSpecialReportCount();
    int ReportCount= spclCount + NUM_REPORTS;
    //printf("Report count is: %d\n ,ReportCount);
      
    ReportInfo *ReportList = malloc (ReportCount * sizeof(ReportInfo));
     ReportInfo *ReportListTemp = ReportList;
    //  copy the common reports
    memcpy(ReportListTemp, &CommonReports,NUM_REPORTS*sizeof(ReportInfo));

    //move pointer in new memory to after the common reports
    for (int x =0; x <NUM_REPORTS; x++ )
        ReportListTemp++;
 
    //  copy the special reports 
    memcpy(ReportListTemp, getSpecialReports(),spclCount*sizeof(ReportInfo));
  
    //  create the report list message
    Message reportMsg;
    reportMsg.type = REPORTLIST;
    reportMsg.dataCount=ReportCount;
    reportMsg.data = ReportList;
    
    if (!sendMessage(&reportMsg))  //  send message to communication library
        printf("Error in sending the list of reports");
 
    free (ReportList);

}

void initialize()
{
    printf("\n*****  creating report table  ******\n\n");

    buildReportList();

    
    initSpecial();
    sendFoxTalkReportList();
}

void unititalize()
{
    // clean up any memory (if needed)
    
}

void* processReport(void *args)
{
    EventInfo *pEvent =args;
    int reportType = pEvent->reportID;
    
    //  initialize the report table
    if ( reportType ==1000){
        initialize();
    } //  un-initialize the report table
    else if (reportType==1001){
        unititalize();
    }else if ( !checkForSpclCode(pEvent)){  //  // process special report.  returns 1 if if it handled the report 
        if (0<=reportType && NUM_REPORTS  > reportType)   //  make sure it is a valid common report ID
            (*CommonReports[reportType].pReportFunction) (pEvent);   //  process the common reports
        else{
            printf("\nI don't know what this report: '%d'  is\n", reportType);
            printf("It's data is: %s\n", pEvent->data);
        }        
    }
}   //  end of process report


	
