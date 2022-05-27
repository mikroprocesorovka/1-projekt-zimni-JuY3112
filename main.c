// Vzorový projekt 
#include "stm8s.h"
#include "milis.h"
#include "stdio.h"
#include "spse_stm8.h"
#include "stm8_hd44780.h"
#include "stm8_hd44780.c"
#include "delay.h"
#include "stm8s.h"


void main(void){
CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1); // taktovat MCU na 16MHz


while(1){
   lcd_init();


}

}





#ifdef USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param file: pointer to the source file name
  * @param line: assert_param error line source number
  * @retval : None
  */
void assert_failed(u8* file, u32 line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
