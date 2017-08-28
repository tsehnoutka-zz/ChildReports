#ifndef REPORTS_H
#define REPORTS_H

#include <stdio.h>
#include <string.h>
#include "event.h"
#include "reportStruct.h"



#define NUM_REPORTS 350
ReportInfo CommonReports[NUM_REPORTS];
void buildReportList();

int reportA(EventInfo *pEvent);
 
//  Station Reports
int StationActivity(EventInfo *pEvent);
int StationConfiguration(EventInfo *pEvent);
int StationDAC(EventInfo *pEvent);
int StationExceptions(EventInfo *pEvent);
int StationInformation(EventInfo *pEvent);
int StationList(EventInfo *pEvent);
int StationORI(EventInfo *pEvent);
int StationStatus(EventInfo *pEvent);
int StationTotals(EventInfo *pEvent);

//  User Reports
int UserConfiguration(EventInfo *pEvent);
int UserException(EventInfo *pEvent);
int UserStatus(EventInfo *pEvent);

// Message Key
int MessageConfiguration(EventInfo *pEvent);

// Computer
int ComputerConfiguration(EventInfo *pEvent);
int ComputerStatus(EventInfo *pEvent);
int ComputerExceptions(EventInfo *pEvent);

//  Performance Monitors
int PerformanceCPU(EventInfo *pEvent);
int PerformanceMessageQueue(EventInfo *pEvent);
int PerformanceMessageThroughput(EventInfo *pEvent);
int PerformanceNetworkUsage(EventInfo *pEvent);

//  Desktop
int DesktopAgencyConfiguration(EventInfo *pEvent);
int DesktopLicenseConfiguration(EventInfo *pEvent);
int DesktopLicenseExceptions(EventInfo *pEvent);

//  Set On Monitor
int SetOnStationMonitor(EventInfo *pEvent);
int SetOnFLOG_Monitor(EventInfo *pEvent);
int SetOnFLOG_View(EventInfo *pEvent);

//  Trace
int TraceSeqNum(EventInfo *pEvent);
int TraceTime(EventInfo *pEvent);
int TraceSpecial(EventInfo *pEvent);
int TraceMRI(EventInfo *pEvent);
int TraceCommandConfiguration(EventInfo *pEvent);
int TraceNetworkEvents(EventInfo *pEvent);
int TraceError(EventInfo *pEvent);

//  Find
int FindSeqNum(EventInfo *pEvent);
int FindTime(EventInfo *pEvent);
int FindSpecial(EventInfo *pEvent);
int FindMRI(EventInfo *pEvent);

//  Role
int RoleConfiguration(EventInfo *pEvent);

//  File
int FileExceptions(EventInfo *pEvent);

// Timer Commands
int TimerCommandsDisplay(EventInfo *pEvent);

// List
int ListMail(EventInfo *pEvent);

//  Message History Statistics
int MHS_Hourly(EventInfo *pEvent);
int MHS_Weekly(EventInfo *pEvent);


#endif