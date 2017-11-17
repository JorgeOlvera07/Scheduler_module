/*
 * Port.c
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

#include "General.h"          /* include peripheral declarations */
#include "Port.h"

void PORT_init (void) {
  //------------------PORTB
  PCC-> PCCn[PCC_PORTB_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT B */
  //Initialize PIN6P25MS
  PTB->PDDR |= 1<<PIN6P25MS; /* Port D0: Data Direction= output */
  PORTB->PCR[PIN6P25MS] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTB->PCOR |= 1<<PIN6P25MS; /* Clear pin*/
  //Initialize PIN12P5MS
  PTB->PDDR |= 1<<PIN12P5MS; /* Port D0: Data Direction= output */
  PORTB->PCR[PIN12P5MS] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTB->PCOR |= 1<<PIN12P5MS; /* Clear pin*/
  //Initialize PIN25MS
  PTB->PDDR |= 1<<PIN25MS; /* Port D0: Data Direction= output */
  PORTB->PCR[PIN25MS] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTB->PCOR |= 1<<PIN25MS; /* Clear pin*/
  //Initialize PIN50MS
  PTB->PDDR |= 1<<PIN50MS; /* Port D0: Data Direction= output */
  PORTB->PCR[PIN50MS] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTB->PCOR |= 1<<PIN50MS; /* Clear pin*/

  //------------------PORTC
	PCC-> PCCn[PCC_PORTC_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT D */
  //Initialize PIN3P125MS
  PTC->PDDR |= 1<<PIN3P125MS; /* Port D0: Data Direction= output */
	PORTC->PCR[PIN3P125MS] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
	PTD->PCOR |= 1<<PIN3P125MS; /* Clear pin*/
  //Initialize PIN100MS
  PTC->PDDR |= 1<<PIN100MS; /* Port D0: Data Direction= output */
	PORTC->PCR[PIN100MS] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
	PTD->PCOR |= 1<<PIN100MS; /* Clear pin*/
  //------------------PORTE
	PCC-> PCCn[PCC_PORTE_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT D */
  //Initialize BKG
  PTE->PDDR |= 1<<PINBKG; /* Port D0: Data Direction= output */
	PORTE->PCR[PINBKG] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTE->PCOR |= 1<<PINBKG; /* Clear pin*/
  //Initialize OVERLOAD
  PTE->PDDR |= 1<<PINOVERLOAD; /* Port D0: Data Direction= output */
	PORTE->PCR[PINOVERLOAD] = 0x00000100; /* Port D0: MUX = ALT1, GPIO (to blue LED on EVB) */
  PTE->PCOR |= 1<<PINOVERLOAD; /* Clear pin*/

  //**************************************************
  PCC-> PCCn[PCC_PORTD_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT D */
  PTD->PDDR |= 1<<0;            /* Port D0:  Data Direction= output */
  PORTD->PCR[0] =  0x00000100;  /* Port D0:  MUX = ALT1, GPIO (to blue LED on EVB) */

  PTD->PDDR |= 1<<15;            /* Port D0:  Data Direction= output */
  PORTD->PCR[15] =  0x00000100;  /* Port D0:  MUX = ALT1, GPIO (to blue LED on EVB) */
}
