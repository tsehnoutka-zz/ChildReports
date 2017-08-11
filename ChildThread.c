#include<pthread.h>
#include <stdlib.h>
#include "Reports.h"
#include "event.h"
#include "reportStruct.h"


#define NUM_REPORTS 2
ReportInfo CommonReports[NUM_REPORTS];
#define TEST_LIST 8
pthread_t tid[TEST_LIST];   //  need to figure this out when I don't know how many thread I will create.  Because I am detaching, can this be the same variable?


int sendFoxTalkReportList()
{
    // call lstrsend() and send it the name for each report ??
    // send them one at a time and have fxtalk put them together?
    // fxtalk will also have to get this for the specific state reports  ??
 
}

void initialize()
{
    printf("\n*****  creating report table  ******\n\n");

    CommonReports[0] = (ReportInfo){0,"reportA", reportA};
    CommonReports[1] = (ReportInfo){1,"reportB", reportB};

    sendFoxTalkReportList();
}

void unititalize()
{
    // remove table from  memory (if needed)
    
}

void* processReport(void *args)
{
    EventInfo *pEvent =args;
    int reportType = pEvent->reportID;
    
    //  initialize the report table
    if ( reportType ==1000){
        initialize();
        initSpecial();
    } //  un-initialize the report table
    else if (reportType==1001){
        unititalize();
    }else if ( !checkForSpclCode(pEvent)){  //  // process special report.  returns 1 if if it handled the report 
        if (0<=reportType && NUM_REPORTS  > reportType)   //  make sure it is a valid report ID
            (*CommonReports[reportType].pReportFunction) (pEvent);   //  process the common reports
        else{
            printf("/nI don't know what this report: '%d'  is\n", reportType);
            printf("It's data is: %s\n", pEvent->data);
        }        
    }
}   //  end of process report


int main( int argc, const char* argv[] )
{
    //  this is simulating my server
    printf("Starting Server\n");
    //  TEST DATA
    EventInfo reportList[TEST_LIST];  
    reportList[0]= (EventInfo){1000,""};
    reportList[1]= (EventInfo){0,"Hello From Common A"};
    reportList[2]= (EventInfo){1,"Hello From Common B"};
    reportList[3]= (EventInfo){100,"Hello From IL X"};
    reportList[4]= (EventInfo){101,"Hello From IL Y"};
    reportList[5]= (EventInfo){102,"Hello From IL Z"};
    reportList[6]= (EventInfo){103,"What is this?"};
    reportList[7]= (EventInfo){1001,""};

    int i=0;
    int err=0;
    
    for (i=0; i<TEST_LIST; i++){
        err = pthread_create(&(tid[i]), NULL, processReport, (void*)(&reportList[i]) );
        if (err != 0)
            printf("***** can't create thread :[%s] *****", strerror(err));
        else
            //printf("Thread created successfully i = %d\n",i);
            pthread_detach(tid[i]);  // let the thread just finish.  the server doesn't need to know when it is done
    } //  end for loop
}	
