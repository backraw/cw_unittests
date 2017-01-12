#include <usart.h>

typedef int putchar_val_t;

putchar_val_t __putchar(const putchar_val_t ch)
{
    /* wait until TX is empty */
    while (__HAL_UART_GET_FLAG(&huart3, UART_FLAG_TXE) == (uint32_t)(RESET))
    {
        /* intentionally left empty loop */
    }

    /* put the character into TX register */
    huart3.Instance->TDR = (ch & 0xFFU);

    /* return the character sent casted as int */
    return ch;
}
