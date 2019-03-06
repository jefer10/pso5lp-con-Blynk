/*******************************************************************************
* File Name: ISR_Chimenea.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_ISR_Chimenea_H)
#define CY_ISR_ISR_Chimenea_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void ISR_Chimenea_Start(void);
void ISR_Chimenea_StartEx(cyisraddress address);
void ISR_Chimenea_Stop(void);

CY_ISR_PROTO(ISR_Chimenea_Interrupt);

void ISR_Chimenea_SetVector(cyisraddress address);
cyisraddress ISR_Chimenea_GetVector(void);

void ISR_Chimenea_SetPriority(uint8 priority);
uint8 ISR_Chimenea_GetPriority(void);

void ISR_Chimenea_Enable(void);
uint8 ISR_Chimenea_GetState(void);
void ISR_Chimenea_Disable(void);

void ISR_Chimenea_SetPending(void);
void ISR_Chimenea_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the ISR_Chimenea ISR. */
#define ISR_Chimenea_INTC_VECTOR            ((reg32 *) ISR_Chimenea__INTC_VECT)

/* Address of the ISR_Chimenea ISR priority. */
#define ISR_Chimenea_INTC_PRIOR             ((reg8 *) ISR_Chimenea__INTC_PRIOR_REG)

/* Priority of the ISR_Chimenea interrupt. */
#define ISR_Chimenea_INTC_PRIOR_NUMBER      ISR_Chimenea__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable ISR_Chimenea interrupt. */
#define ISR_Chimenea_INTC_SET_EN            ((reg32 *) ISR_Chimenea__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the ISR_Chimenea interrupt. */
#define ISR_Chimenea_INTC_CLR_EN            ((reg32 *) ISR_Chimenea__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the ISR_Chimenea interrupt state to pending. */
#define ISR_Chimenea_INTC_SET_PD            ((reg32 *) ISR_Chimenea__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the ISR_Chimenea interrupt. */
#define ISR_Chimenea_INTC_CLR_PD            ((reg32 *) ISR_Chimenea__INTC_CLR_PD_REG)


#endif /* CY_ISR_ISR_Chimenea_H */


/* [] END OF FILE */
