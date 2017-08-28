/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ChildThread.h
 * Author: Fox
 *
 * Created on August 15, 2017, 8:13 AM
 */

#ifndef CHILDTHREAD_H
#define CHILDTHREAD_H


#include <stdlib.h>
#include <string.h>
#include "Reports.h"
#include "event.h"
#include "reportStruct.h"
#include "Com_Lib.h"
#include "ChildThreadSpecial.h"



void* processReport(void *args);



#endif /* CHILDTHREAD_H */

