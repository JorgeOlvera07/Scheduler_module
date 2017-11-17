/*
 * SchM_Types.h
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

#ifndef BSW_SERVICES_SCHM_SCHM_TYPES_H_
#define BSW_SERVICES_SCHM_SCHM_TYPES_H_

#include "Std_Types.h"

#define PINBKG      9
#define PIN3P125MS  7
#define PIN6P25MS   17
#define PIN12P5MS   14
#define PIN25MS     15
#define PIN50MS     16
#define PIN100MS    3
#define PINOVERLOAD 16

typedef enum
{
	SCHM_TASK_STATE_SUSPENDED,
	SCHM_TASK_STATE_READY,
	SCHM_TASK_STATE_RUNNING
}SchM_TaskStateType;

typedef enum
{
	SCHM_UNINIT,
	SCHM_INIT,
	SCHM_IDLE,
	SCHM_RUNNING,
	SCHM_OVERLOAD,
	SCHM_HALTED
}SchM_SchedulerStateType;

typedef struct
{
	SchM_TaskStateType SchM_TaskState;
}SchM_TaskControlBlockType;

typedef struct
{
	uint16_t	OsTickCounter;
	SchM_SchedulerStateType SchM_SchedulerState;
}SchM_SchedulerStatusType;

#endif /* BSW_SERVICES_SCHM_SCHM_TYPES_H_ */
