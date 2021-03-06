/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : Lock_UnLock.c
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
**                       118           |  PM6_RxCAN3_RxCAN4_RxD3
**             ----------------------------------------------------
**
**         Port name                   : M
**
**         Bit number (in port)        : 6
**         Bit mask of the port        : $0040
**
**         Initial direction           : Output (direction cannot be changed)
**         Initial output value        : 1
**         Initial pull option         : off
**
**         Port data register          : PTM       [$0250]
**         Port control register       : DDRM      [$0252]
**
**         Optimization for            : speed
**     Contents  :
**         PutVal - void Lock_UnLock_PutVal(bool Val);
**         ClrVal - void Lock_UnLock_ClrVal(void);
**         SetVal - void Lock_UnLock_SetVal(void);
**
**     Copyright : 1997 - 2011 Freescale Semiconductor, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

/* MODULE Lock_UnLock. */

#include "Lock_UnLock.h"
  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"

#pragma DATA_SEG Lock_UnLock_DATA      /* Select data segment "Lock_UnLock_DATA" */
#pragma CODE_SEG Lock_UnLock_CODE
#pragma CONST_SEG Lock_UnLock_CONST    /* Constant section for this module */
/*
** ===================================================================
**     Method      :  Lock_UnLock_PutVal (component BitIO)
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
void Lock_UnLock_PutVal(bool Val)
{
  if (Val) {
    setReg8Bits(PTM, 0x40U);           /* PTM6=0x01U */
  } else { /* !Val */
    clrReg8Bits(PTM, 0x40U);           /* PTM6=0x00U */
  } /* !Val */
}

/*
** ===================================================================
**     Method      :  Lock_UnLock_ClrVal (component BitIO)
**
**     Description :
**         This method clears (sets to zero) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void Lock_UnLock_ClrVal(void)

**  This method is implemented as a macro. See Lock_UnLock.h file.  **
*/

/*
** ===================================================================
**     Method      :  Lock_UnLock_SetVal (component BitIO)
**
**     Description :
**         This method sets (sets to one) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void Lock_UnLock_SetVal(void)

**  This method is implemented as a macro. See Lock_UnLock.h file.  **
*/


/* END Lock_UnLock. */
/*
** ###################################################################
**
**     This file was created by Processor Expert 3.05 [04.46]
**     for the Freescale HCS12X series of microcontrollers.
**
** ###################################################################
*/
