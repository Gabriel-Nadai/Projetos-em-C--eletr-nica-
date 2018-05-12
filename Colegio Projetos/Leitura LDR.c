#include <16F873A.h>
#device adc=10
#FUSES HS                       //High speed Osc (> 4mhz for PCM/PCH) (>10mhz for PCD)
#use delay(clock=20000000)
   
   
   
   float ad, tensao, lux;
void main(void)
{

   setup_adc_ports(AN0);
   setup_adc(ADC_CLOCK_INTERNAL);
   set_adc_channel(0);
   
   
   while(1){
   
    ad=read_adc();
    delay_ms(10);
    tensao=(ad/240);
    
    if(tensao<2.8&&tensao>=2)
   {
      lux=((4036.4-(1249*tensao))/0.8);
   }
    if(tensao>=2.8&&tensao<=3.8)
   {
      lux=(2057.2-(494*tensao));
   }
   
    if(tensao>3.8&&tensao<=4.9)
   {
      lux=((900-(180*tensao))/1.2);
   }
   
   if(lux<=300)
     output_low(pin_b0);
      else
      output_high(pin_b0);
    
}

     
}
