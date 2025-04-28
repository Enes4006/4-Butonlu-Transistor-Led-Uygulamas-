#include <16f877.h>
#use delay(clock=4000000) 

void main()
{
   set_tris_a(0x0f); // ilk 4 bit giriþ yapýlýr 
   output_a(0x00);
   
   set_tris_d(0x00); //Tüm PORTD çýkýþ
   output_d(0x00);
   
   int i;

   while(TRUE)
   {
      if(input(pin_a0)==1)
      {
         for(i=0;i<1;i++)
         {
            output_high(pin_d7);
            delay_ms(1000);
            output_low(pin_d7);
            delay_ms(1000);
         }
      }
      i=0;
      if(input(pin_a1)==1)
      {
         for(i=0;i<2;i++)
         {
            output_high(pin_d6);
            delay_ms(750);
            output_low(pin_d6);
            delay_ms(750);
         }
      }
      i=0;
      if(input(pin_a2)==1)
      {
         for(i=0;i<3;i++)
         {
            output_high(pin_d5);
            delay_ms(500);
            output_low(pin_d5);
            delay_ms(500);
         }
      }
      i=0;
      if(input(pin_a3)==1)
      {
         for(i=0;i<4;i++)
         {
            output_high(pin_d4);
            delay_ms(250);
            output_low(pin_d4);
            delay_ms(250);
         }
      }
   }

}
