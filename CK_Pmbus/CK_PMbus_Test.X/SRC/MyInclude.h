#ifndef MYINCLUDE_H
#define	MYINCLUDE_H
/****************************************************************
 *This file is use link each header file  
 * 
 *public or pravite saving function indeptent each file linker 
 ****************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include <xc.h>
#include "ISR.h"
#include "../mcc_generated_files/i2c1.h"


/*ptr func void Gernciec type*/
typedef void (*Callback)(void);

/*File_typedef*/
typedef unsigned char		uint8_t ;
typedef unsigned int		uint16_t ;
typedef unsigned long		uint32_t ;
typedef unsigned long long	uint64_t ;
typedef char				int8 ;
typedef int				    int16 ;
typedef long				int32 ;
typedef long long           int64;


/*I2C Status*/
typedef enum
{
   Start_send, 
   Unable_send,
   Unable_receive, 
   Stop_Transmint 

}I2C1_TEST_STATUS;

extern  I2C1_TEST_STATUS I2C_STATUS;





#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* TEMPLATE_H */