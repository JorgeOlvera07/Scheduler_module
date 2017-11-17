/*
 * SchM_Tasks.h
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

#ifndef BSW_SERVICES_SCHM_SCHM_TASKS_H_
#define BSW_SERVICES_SCHM_SCHM_TASKS_H_

#include "Std_Types.h"

#define NumberOfCycles (uint32_t)2700

#define PINBKG      9
#define PIN3P125MS  7
#define PIN6P25MS   17
#define PIN12P5MS   14
#define PIN25MS     15
#define PIN50MS     16
#define PIN100MS    3
#define PINOVERLOAD 16

extern void SchM_3p125ms_Task  ( void );
extern void SchM_6p25ms_Task   ( void );
extern void SchM_12p5ms_Task   ( void );
extern void SchM_25ms_Task     ( void );
extern void SchM_50ms_Task     ( void );
extern void SchM_100ms_Task    ( void );


#endif /* BSW_SERVICES_SCHM_SCHM_TASKS_H_ */
