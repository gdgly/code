/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : CPU_CAR_CAN_STB.h
**     Project   : mcal
**     Processor : MC9S12XEP100MAG
**     Component : BitIO
**     Version   : Component 02.075, Driver 03.14, CPU db: 3.00.036
**     Compiler  : CodeWarrior HCS12X C Compiler
**     Date/Time : 2017/3/23, 21:47
**     Abstract  :
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Note: This component is set to work in Output direction only.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
**     Settings  :
**         Used pin                    :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       36            |  PB4_ADDR4_IVD4
**             ----------------------------------------------------
**
**         Port name                   : B
**
**         Bit number (in port)        : 4
**         Bit mask of the port        : $0010
**
**         Initial direction           : Output (direction cannot be changed)
**         Initial output value        : 0
**         Initial pull option         : off
**
**         Port data register          : PORTB     [$0001]
**         Port control register       : DDRB      [$0003]
**
**         Optimization for            : speed
**     Contents  :
**         PutVal - void CPU_CAR_CAN_STB_PutVal(bool Val);
**         ClrVal - void CPU_CAR_CAN_STB_ClrVal(void);
**         SetVal - void CPU_CAR_CAN_STB_SetVal(void);
**
**     Copyright : 1997 - 2011 Freescale Semiconductor, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

#ifndef CPU_CAR_CAN_STB_H_
#define CPU_CAR_CAN_STB_H_

/* MODULE CPU_CAR_CAN_STB. */

  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"

#pragma CODE_SEG CPU_CAR_CAN_STB_CODE
/*
** ===================================================================
**     Method      :  CPU_CAR_CAN_STB_PutVal (component BitIO)
**
**     Description :
**         This method writes the new output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Val             - Output value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)
**     Returns     : Nothing
** ===================================================================
*/
void CPU_CAR_CAN_STB_PutVal(bool Val);

/*
** ===================================================================
**     Method      :  CPU_CAR_CAN_STB_ClrVal (component BitIO)
**
**     Description :
**         This method clears (sets to zero) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#define CPU_CAR_CAN_STB_ClrVal() ( \
    (void)clrReg8Bits(PORTB, 0x10U)    /* PB4=0x00U */ \
  )

/*
** ===================================================================
**     Method      :  CPU_CAR_CAN_STB_SetVal (component BitIO)
**
**     Description :
**         This method sets (sets to one) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#define CPU_CAR_CAN_STB_SetVal() ( \
    (void)setReg8Bits(PORTB, 0x10U)    /* PB4=0x01U */ \
  )

#pragma CODE_SEG DEFAULT

/* END CPU_CAR_CAN_STB. */
#endif /* #ifndef __CPU_CAR_CAN_STB_H_ */
/*
** ###################################################################
**
**     This file was created by Processor Expert 3.05 [04.46]
**     for the Freescale HCS12X series of microcontrollers.
**
** ###################################################################
*/
