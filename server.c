/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include<pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "event.h"
#include "Com_Lib.h"
#include "ChildThread.h"

#define TEST_LIST 12
pthread_t tid[TEST_LIST];   //  need to figure this out when I don't know how many thread I will create.  Because I am detaching, can this be the same variable?

int main( int argc, const char* argv[] )
{
    //  this is simulating my server
    StatusMsg myStatus =(StatusMsg){0,"Starting Server"};
    Message StatusMsg=(Message){STATUS,1,&myStatus};
    sendMessage(&StatusMsg);
    //  TEST DATA
    EventInfo reportList[TEST_LIST];  
    reportList[0]= (EventInfo){1000,""};
    reportList[1]= (EventInfo){0,"Hello From Common DSA"};
    reportList[2]= (EventInfo){1,"Hello From Common DSC"};
    reportList[3]= (EventInfo){500,"Hello From IL X"};
    reportList[4]= (EventInfo){501,"Hello From IL Y"};
    reportList[5]= (EventInfo){502,"Hello From IL Z"};
    reportList[6]= (EventInfo){503,"What is this?"};
    reportList[7]= (EventInfo){9,"Report A"};
    reportList[8]= (EventInfo){25,"User report - Config"};
    reportList[9]= (EventInfo){26,"User report - Exceptions"};
    reportList[10]= (EventInfo){27,"User reports - Status"};
    reportList[11]= (EventInfo){1001,""};

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
    
    printf("*****   DONE!   *****\n");
}
