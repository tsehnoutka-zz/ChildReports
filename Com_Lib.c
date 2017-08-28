/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "Com_Lib.h"
#include "ReportStruct.h"


int sendMessage(Message *inMsg){
    if (inMsg==0)
            return 0;
    
    switch (inMsg->type) {
      case REPORTLIST :{
            printf("The message type is: %s\n", "Report List");
            int count = inMsg->dataCount;
            struct Report  *myList = (struct Report*)inMsg->data;   //  my list is pointing at an array of ReportInfo Structs
             
            //  call lstrsend and send the data to the station
            for(int i=0; i< count; i++){
                char *name = myList->name;
                if ( 0 != name)
                    printf("The Report Name is: %s\n", name); //  i want the contents of the pointer
                myList++;
            }  //  end for
            printf("\n");
            break;
        }
        case STATUS :{
            StatusMsg *myStatus = (StatusMsg*)inMsg->data;
            printf("The status message is: %s\n",myStatus->msg);
            //  call lstrsend and send the data to the station
            break;
        }
        default:
            printf("Not sure what this message type: %d is ", inMsg->type);
            return 0;
    } // end switch
  
    return 1;
} //  end Send Message