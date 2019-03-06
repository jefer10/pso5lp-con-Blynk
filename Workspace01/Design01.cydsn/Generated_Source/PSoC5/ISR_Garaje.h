/*******************************************************************************
* File Name: ISR_Garaje.h
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
#if !defined(CY_ISR_ISR_Garaje_H)
#define CY_ISR_ISR_Garaje_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void ISR_Garaje_Start(void);
void ISR_Garaje_StartEx(cyisraddress address);
void ISR_Garaje_Stop(void);

CY_ISR_PROTO(ISR_Garaje_Interrupt);

void ISR_Garaje_SetVector(cyisraddress address);
cyisraddress ISR_Garaje_GetVector(void);

void ISR_Garaje_SetPriority(uint8 priority);
uint8 ISR_Garaje_GetPriority(void);

void ISR_Garaje_Enable(void);
uint8 ISR_Garaje_GetState(void);
void ISR_Garaje_Disable(void);

void ISR_Garaje_SetPending(void);
void ISR_Garaje_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the ISR_Garaje ISR. */
#define ISR_Garaje_INTC_VECTOR            ((reg32 *) ISR_Garaje__INTC_VECT)

/* Address of the ISR_Garaje ISR priority. */
#define ISR_Garaje_INTC_PRIOR             ((reg8 *) ISR_Garaje__INTC_PRIOR_REG)

/* Priority of the ISR_Garaje interrupt. */
#define ISR_Garaje_INTC_PRIOR_NUMBER      ISR_Garaje__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable ISR_Garaje interrupt. */
#define ISR_Garaje_INTC_SET_EN            ((reg32 *) ISR_Garaje__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the ISR_Garaje interrupt. */
#define ISR_Garaje_INTC_CLR_EN            ((reg32 *) ISR_Garaje__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the ISR_Garaje interrupt state to pending. */
#define ISR_Garaje_INTC_SET_PD            ((reg32 *) ISR_Garaje__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the ISR_Garaje interrupt. */
#define ISR_Garaje_INTC_CLR_PD            ((reg32 *) ISR_Garaje__INTC_CLR_PD_REG)


#endif /* CY_ISR_ISR_Garaje_H */


/* [] END OF FILE */
