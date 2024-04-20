/****************************************************************
 * inclue file
 *
 * thread excutee in timer
 *
 ****************************************************************/
#include "mythread.h"
#include "../mcc_generated_files/uart1.h"
#include "../mcc_generated_files/i2c1.h"
/****************************************************************
 * struct enum uion etc....
 ****************************************************************/

uart_status_test uart_stats;
/****************************************************************
 * 字串搜索
 ****************************************************************/

void Search_String(char s[], char out[], uint16_t p, uint16_t l)
{
    int8_t cnt = 0;             // 取值得計數
    int8_t out_last_length = l; // 要寫入的位置
    int8_t j = 0;               // 補 0的計數
    /*strcspn*/
    char *sTmp;
    // 指標致receive端
    sTmp = s;
    // 填入Buffer
    while (cnt < l)
    {
        out[out_last_length] = *(sTmp + p + cnt);
        cnt++;
        out_last_length++;
    }
    // 剩下位數補0
    while (j < l)
    {
        out[j] = '0';
        j++;
    }
}

/****************************************************************
 * 傳輸回調任務
 *
 *
 ****************************************************************/
void __attribute__((weak)) UART1_Transmit_CallBack(void)
{
    /**/

    if (uart_stats == tx_ack)
        uart_stats = tx_nack;
}

/****************************************************************
 * 接收回調任務
 *
 *
 ****************************************************************/
void __attribute__((weak)) UART1_Receive_CallBack(void)
{
    /**/

    if (uart_stats == rx_ack)
        uart_stats = rx_nack;
}
