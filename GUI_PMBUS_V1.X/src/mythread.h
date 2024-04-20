#ifndef MYTHREAD_H
#define	MYTHREAD_H

/****************************************************************
 * inclue file
 ****************************************************************/
#include "myHeader.h"

/****************************************************************
 * struct enum uion etc....   
 ****************************************************************/
typedef enum
{
  rx_ack,
  rx_nack,
  tx_ack,
  tx_nack  
}uart_status_test;

 extern uart_status_test uart_stats;

/****************************************************************
 * ptr struct enum uion etc
 ****************************************************************/


/****************************************************************
 * 擴充方法
 ****************************************************************/
void Search_String(char s[],char out[],uint16_t p,uint16_t l);

#ifdef	__cplusplus
extern "C" {
#endif
#ifdef	__cplusplus
}
#endif

#endif	/* TEMPLATE_H */
