/*******************************************************************************
* File Name: Pin_A.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pin_A_ALIASES_H) /* Pins Pin_A_ALIASES_H */
#define CY_PINS_Pin_A_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Pin_A_0			(Pin_A__0__PC)
#define Pin_A_0_INTR	((uint16)((uint16)0x0001u << Pin_A__0__SHIFT))

#define Pin_A_1			(Pin_A__1__PC)
#define Pin_A_1_INTR	((uint16)((uint16)0x0001u << Pin_A__1__SHIFT))

#define Pin_A_2			(Pin_A__2__PC)
#define Pin_A_2_INTR	((uint16)((uint16)0x0001u << Pin_A__2__SHIFT))

#define Pin_A_3			(Pin_A__3__PC)
#define Pin_A_3_INTR	((uint16)((uint16)0x0001u << Pin_A__3__SHIFT))

#define Pin_A_4			(Pin_A__4__PC)
#define Pin_A_4_INTR	((uint16)((uint16)0x0001u << Pin_A__4__SHIFT))

#define Pin_A_5			(Pin_A__5__PC)
#define Pin_A_5_INTR	((uint16)((uint16)0x0001u << Pin_A__5__SHIFT))

#define Pin_A_INTR_ALL	 ((uint16)(Pin_A_0_INTR| Pin_A_1_INTR| Pin_A_2_INTR| Pin_A_3_INTR| Pin_A_4_INTR| Pin_A_5_INTR))

#endif /* End Pins Pin_A_ALIASES_H */


/* [] END OF FILE */
