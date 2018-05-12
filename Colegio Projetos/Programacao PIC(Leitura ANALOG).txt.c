#include <16F873A.h>                                                              // Cabecalho
#device ADC=10
#FUSES HS, NOWDT, PUT, NOPROTECT, NODEBUG, NOBROWNOUT, NOLVP, NOCPD, NOWRT         
#use delay(clock=20M)                                                             //Define clock 20Mhz
  
   float ad0, ad1, ad2, ad3, ad4, tensao0, tensao1, tensao2, tensao3, tensao4;

                                                                                 // Cabecalho
                                                                                  
void main()
{
   setup_adc_ports(All_ANALOG);           //Define todas as entradas No modo Analogico
   setup_adc(ADC_CLOCK_INTERNAL );         // habilita clock Interno
   setup_spi(SPI_SS_DISABLED);             // Desabilita SPI
   setup_timer_1(T1_DISABLED);             // Desabilita Timer1
   setup_timer_2(T2_DISABLED,0,1);         // Desabilita Timer2
   setup_comparator(NC_NC_NC_NC);          // Seta Comparador Normal Fechado

   while(true){ 
    set_adc_channel(0);                    //Lê entrada analogica 0
    delay_ms(50);
    read_adc(ADC_START_ONLY);
    ad0=read_adc();
    tensao0=(ad0/204);
    
    
    if(tensao0<3)
      
      output_high(pin_c0);               //Ativa pino c0
      
   if(tensao0>3)
      
      output_low(pin_c0);               //Desativa pino c0
   
    set_adc_channel(1);                 //Lê entrada analogica 1
    delay_ms(50);
    read_adc(ADC_START_ONLY);
    ad1=read_adc();
    tensao1=(ad1/204);
    
    
    if(tensao1>=3.9)
      
      output_high(pin_c1);               //Ativa pino c1
      
    if(tensao1<3.9)
      
      output_low(pin_c1);                //Desativa pino c1
      
    set_adc_channel(2);               //Lê entrada analogica 2
    delay_ms(50);
    read_adc(ADC_START_ONLY);
    ad2=read_adc();
    tensao2=(ad2/204);
    
    
    if(tensao2<3)                     //Ativa pino c2
      
      output_high(pin_c2);
      
    if(tensao2>3)
      
      output_low(pin_c2);            //Desativa pino c2
      
    set_adc_channel(3);              //Lê entrada analogica 3
    delay_ms(50);
    read_adc(ADC_START_ONLY);
    ad3=read_adc();
    tensao3=(ad3/204);
    
    
    if(tensao3>=3.9)
      
      output_high(pin_c3);            //Ativa pino c3
      
    if(tensao3<3.9)
      
      output_low(pin_c3);           //Desativa pino c3
    
    set_adc_channel(4);             //Lê entrada analogica 4
    delay_ms(50);
    read_adc(ADC_START_ONLY);
    ad4=read_adc();
    tensao4=(ad4/204);
    
    
    if(tensao4<3)
      
      output_high(pin_c4);              //Ativa pino c4
      
    if(tensao4>3)
      
      output_low(pin_c4);               //Desativa pino c4
      
}
}


   


