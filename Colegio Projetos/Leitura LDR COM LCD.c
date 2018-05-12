#include <16F873A.h>
#device ADC=10
#FUSES HS, NOWDT, PUT, NOPROTECT, NODEBUG, NOBROWNOUT, NOLVP, NOCPD, NOWRT         //High speed Osc (> 4mhz for PCM/PCH) (>10mhz for PCD)
#use delay(clock=4M)
   
   #define use_portb_lcd TRUE
   #include <lcd16x2.h>
   
   float ad0, ad1, ad2, ad3, tensao0, tensao1, tensao2, tensao3, lux0, lux1 ,lux2, lux3;

void main()
{
   lcd_init();
   lcd_gotoxy(1,1);
   lcd_putc("Inciando...");
   delay_ms(1000);
   lcd_putc("\f\b");
   
   setup_adc_ports(All_ANALOG);
   setup_adc(ADC_CLOCK_INTERNAL);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);

   while(true){ 
    set_adc_channel(0);
    delay_ms(10);
    read_adc(ADC_START_ONLY);
    ad0=read_adc();
    delay_ms(10);
    tensao0=(ad0/204);
    
    if(tensao1<2.8&&tensao1>=2)
   {
      lux0=((4036.4-(1249*tensao0))/0.8);
   }
    if(tensao0>=2.8&&tensao0<=3.8)
   {
      lux0=(2057.2-(494*tensao0));
   }
   
    if(tensao0>3.8&&tensao0<=4.9)
   {
      lux0=((900-(180*tensao0))/1.2);
   }
    
    if(lux0<=300){
         output_low(pin_C0);

   }
    if(lux0>=300){
         output_high(pin_C0);
    } 
    if(lux0<=600){
         output_low(pin_C1);
    }
    if(lux0>=600){
         output_high(pin_C1);
    }
    set_adc_channel(1);
    delay_ms(10);
    read_adc(ADC_START_ONLY);
    ad1=read_adc();
    delay_ms(10);
    tensao1=(ad1/204);
    
    if(tensao1<2.8&&tensao1>=2)
   {
      lux1=((4036.4-(1249*tensao1))/0.8);
   }
    if(tensao1>=2.8&&tensao1<=3.8)
   {
      lux1=(2057.2-(494*tensao1));
   }
   
    if(tensao1>3.8&&tensao1<=4.9)
   {
      lux1=((900-(180*tensao1))/1.2);
   }
    
      if(lux1<=300){
     output_low(pin_C3);
      }
     if(lux1>=300)
     output_high(pin_C3);
   }
}

   


