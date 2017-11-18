/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Tasks.c $
 * $Revision: 3 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 17/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \
    
*/
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2014                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*  AUTHOR             |      VERSION       |        DESCRIPTION              */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia     |         3          |                                 */
/*  Jorge Olvera       |         3          |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Tasks.c  $
  ============================================================================*/


/* Includes */
/*============================================================================*/

#include "SchM_Tasks.h"
#include "Dio.h"


/* Defines */
/*============================================================================*/



/* Constants and types */
/*============================================================================*/



/* Exported Variables */
/*============================================================================*/


/* Exported functions */
/*============================================================================*/

void SchM_3p125ms_Task ( void )
{

	Dio_PortTooglePin(PORTCH_C, PIN3P125MS);
	//static int counter;
	//for(counter=0;counter <= NumberOfCycles; counter++){}

}


void SchM_6p25ms_Task ( void )
{
	Dio_PortTooglePin(PORTCH_B, PIN6P25MS);
	//static int counter;
	//for(counter=0;counter <= NumberOfCycles; counter++){}

}

extern void SchM_12p5ms_Task   ( void ){
	Dio_PortTooglePin(PORTCH_B, PIN12P5MS);
	//static int counter;
	//for(counter=0;counter <= NumberOfCycles; counter++){}
}
extern void SchM_25ms_Task     ( void ){
	Dio_PortTooglePin(PORTCH_B, PIN25MS);
	//static int counter;
	//for(counter=0;counter <= NumberOfCycles; counter++){}
}
extern void SchM_50ms_Task     ( void ){
	Dio_PortTooglePin(PORTCH_B, PIN50MS);
	//static int counter;
	//for(counter=0;counter <= NumberOfCycles; counter++){}
}
extern void SchM_100ms_Task    ( void ){
	Dio_PortTooglePin(PORTCH_C, PIN100MS);
	//static int counter;
	//for(counter=0;counter <= NumberOfCycles; counter++){}

}


/* Notice: the file ends with a blank new line to avoid compiler warnings */



