/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Reports.h"
void addStreaming(int index, int interval)
{
    CommonReports[0].streamingCount+=1;
    //  add interval to data store
}
void removeStreaming(int index)
{
    CommonReports[0].streamingCount-=1;
    //  remove interval from data store.  How do i know which one to remove??  How do I associate an interval with a destination
}


void buildReportList(){
    //  Station
    CommonReports[0] = (ReportInfo){0,"Station Activity", "Shows Station Activity information - Input/Output sequence numbers, Character and error counters", StationActivity,0};
    CommonReports[1] = (ReportInfo){1,"Station Configuration", "Shows Station Configuration information", StationConfiguration,0};
    CommonReports[2] = (ReportInfo){2,"Station DAC", "Shows Station's assigned DAC information", StationDAC,0};
    CommonReports[3] = (ReportInfo){3,"Station Exceptions", "Shows Station's exceptions - Station exception display stations in a special or abnormal state (options: Active, On Copy, Down, Failed, On Hold,  Inactive (not connected), Set on Monitor, Off-line, Auto Purged (Stations that had messages Auto Purged today), Messages in Queue, Rerouted, Skip, Trouble)", StationExceptions,0};
    CommonReports[4] = (ReportInfo){4,"Station Information", "Shows all configured station information", StationInformation,0};
    CommonReports[5] = (ReportInfo){5,"Station List", "Show which LIST class stations contain a given station name", StationList,0};
    CommonReports[6] = (ReportInfo){6,"Station ORI", "Shows ORIs associated to a real station", StationORI,0};
    CommonReports[7] = (ReportInfo){7,"Station Status", "Shows station status plus messages in queue", StationStatus,0};
    CommonReports[8] = (ReportInfo){8,"Station Totals", "Input station statistics by MKE", StationTotals,0};
    
    // needed to test report "overriding"
    CommonReports[9] = (ReportInfo){9,"ReportA", "This is a test report to show that a report can be \"overloaded\"", reportA,0};
    
    //  User
    CommonReports[25] = (ReportInfo){25,"User Configuration", "Shows User Configuration information", UserConfiguration,0};
    CommonReports[26] = (ReportInfo){26,"User Exceptions", "Shows User's exceptions - User exception display users in a special or abnormal state (options: Active (logged onto a station), Requires re-certification, Disabled Users, Enabled Users, Inactive for defined number of days after date of last use. \"see USER_ACT_EXP\", Locked out, Recertification month)", UserException,0};
    CommonReports[27] = (ReportInfo){27,"User Status", "Shows User Status Information", UserStatus,0}; 
    
    // Message Key
    CommonReports[50] = (ReportInfo){50,"Message Configuration", "Shows Message Key Configuration information", MessageConfiguration,0};
// Computer
    CommonReports[75] = (ReportInfo){75,"Computer Configuration", "Shows Computer Configuration", ComputerConfiguration,0};
    CommonReports[76] = (ReportInfo){76,"Computer Status", "Shows Computer Status Information", ComputerStatus,0};
    CommonReports[77] = (ReportInfo){77,"Computer Exceptions", "Shows Software Switch Information and allows control", ComputerExceptions,0};

//  Performance Monitors
    CommonReports[100] = (ReportInfo){100,"Performance CPU", "CPU usage graph - OS CPU reported values", PerformanceCPU,0};
    CommonReports[101] = (ReportInfo){101,"Performance Message Queue", "Messages in Queue graph", PerformanceMessageQueue,0};
    CommonReports[102] = (ReportInfo){102,"Performance Message Throughput", "Message throughput graph", PerformanceMessageThroughput,0};
    CommonReports[103] = (ReportInfo){103,"Performance Network Usage", "Network Usage graph", PerformanceNetworkUsage,0};
    
//  Desktop
    CommonReports[125] = (ReportInfo){125,"Desktop Agency Configuration", "Shows Agency Configuration information", DesktopAgencyConfiguration,0};
    CommonReports[126] = (ReportInfo){126,"Desktop License Configuration", "Shows License Configuration information", DesktopLicenseConfiguration,0};
    CommonReports[127] = (ReportInfo){124,"Desktop License Exceptions", "Shows License exceptions - License exception display licenses with a special or abnormal state (options: Expired, Licenses that will expire in some number of days)", DesktopLicenseExceptions,0};

//  Set On Monitor
    CommonReports[150] = (ReportInfo){150,"Set On Station Monitor", "Monitor a Station's traffic", SetOnStationMonitor,0};
    CommonReports[151] = (ReportInfo){151,"Set On FLOG Monitor", "Monitor the active FLOG file", SetOnFLOG_Monitor,0};
    CommonReports[152] = (ReportInfo){152,"Set On FLOG View", "Opens any of the FLOG files for viewing", SetOnFLOG_View,0};
    
//  Trace
    CommonReports[175] = (ReportInfo){175,"Trace Sequence Number", "Logical Breakdown of the Trace command with sequence numbers as the primary criteria", TraceSeqNum,0};
    CommonReports[176] = (ReportInfo){176,"Trace Time", "Logical Breakdown of the Trace command with time/date as the primary criteria", TraceTime,0};
    CommonReports[177] = (ReportInfo){177,"Trace Special", "Logical Breakdown of the Trace command with special information as the primary criteria", TraceSpecial,0};
    CommonReports[178] = (ReportInfo){178,"Trace MRI", "Logical Breakdown of the Trace command with MRI as the primary criteria", TraceMRI,0};
    CommonReports[179] = (ReportInfo){179,"Trace Command Configuration", "Logical Breakdown of the Trace command with command/configuration as the primary criteria", TraceCommandConfiguration,0};
    CommonReports[180] = (ReportInfo){180,"Trace Network Events", "Logical Breakdown of the Trace command with network events as the primary criteria", TraceNetworkEvents,0};
    CommonReports[181] = (ReportInfo){181,"Trace Error", "Logical Breakdown of the Trace command with errors as the primary criteria", TraceError,0};

//  Find
    CommonReports[200] = (ReportInfo){200,"Find Sequence Number", "Logical Breakdown of the Find command with sequence numbers as the primary criteria", FindSeqNum,0};
    CommonReports[201] = (ReportInfo){201,"Find Time", "Logical Breakdown of the Find command with time/date as the primary criteria", FindTime,0};
    CommonReports[202] = (ReportInfo){202,"Find Special", "Logical Breakdown of the Find command with special information as the primary criteria", FindSpecial,0};
    CommonReports[203] = (ReportInfo){203,"Find MRI", "Logical Breakdown of the Find command with MRI as the primary criteria", FindMRI,0};

//  Role
    CommonReports[225] = (ReportInfo){225,"Role Configuration", "Shows Role Configuration information", RoleConfiguration,0};

//  File
    CommonReports[250] = (ReportInfo){250,"File Exceptions", "Shows File Exceptions", FileExceptions,0};

// Timer Commands
    CommonReports[275] = (ReportInfo){275,"Timer Commands Display", "Shows Timer commands setup in the system", TimerCommandsDisplay,0};

// List
int ListMail(EventInfo *pEvent);
    CommonReports[300] = (ReportInfo){300,"List Mail", "Shows all undelivered messages in queue for a station - allows purge/trace by MRI/find by MRI", ListMail,0};

//  Message History Statistics
    CommonReports[325] = (ReportInfo){325,"Message History Status - Hourly", "cronjobs on server run to gather message statistics information in on an hourly basis to show input/output/total messages", MHS_Hourly,0};
    CommonReports[326] = (ReportInfo){326,"Message History Status - Weekly", "cronjobs on server run to gather message statistics information in on a daily basis to show input/output/total messages", MHS_Weekly,0};


}