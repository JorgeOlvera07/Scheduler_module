/*
 * SchM_Tasks.c
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

#include "SchM_Tasks.h"
#include "Dio.h"


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
