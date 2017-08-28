/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Com_Lib.h
 * Author: Fox
 *
 * Created on August 14, 2017, 9:24 AM
 */

#ifndef COM_LIB_H
#define COM_LIB_H


#define REPORTLIST 0
#define STATUS 1

typedef struct Msg {
    int type;
    int dataCount;
    void *data;
}Message;

typedef struct Status {
    int priority;
    char *msg;
}StatusMsg;

int sendMessage(Message *inMsg);
#endif /* COM_LIB_H */

