/*
 * Port.h
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

#ifndef BSW_MCAL_PORT_PORT_H_
#define BSW_MCAL_PORT_PORT_H_

#include "Std_Types.h"

#define PINBKG      9
#define PIN3P125MS  7
#define PIN6P25MS   17
#define PIN12P5MS   14
#define PIN25MS     15
#define PIN50MS     16
#define PIN100MS    3
#define PINOVERLOAD 16

void PORT_init (void);

#endif /* BSW_MCAL_PORT_PORT_H_ */
