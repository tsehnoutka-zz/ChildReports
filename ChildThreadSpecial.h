/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ChildThreadSpecial.h
 * Author: Fox
 *
 * Created on August 15, 2017, 11:27 AM
 */

#ifndef CHILDTHREADSPECIAL_H
#define CHILDTHREADSPECIAL_H

int checkForSpclCode(EventInfo *pEvent);
int initSpecial();
int getSpecialReportCount();
ReportInfo* getSpecialReports();

#endif /* CHILDTHREADSPECIAL_H */

