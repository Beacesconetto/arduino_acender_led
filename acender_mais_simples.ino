void setup()
{
    // Porta 13 (LED_BUILTIN) em modo de saída (escrita)
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  
        // Aguarda 1000 milésimos de segundo      
        delay(1000); 
  
        // Desliga o LED
       digitalWrite(LED_BUILTIN, LOW); 

        // Aguarda 1000 milésimos de segundo
       delay(1000);

        // Liga o LED
       digitalWrite(LED_BUILTIN, HIGH); 
   }
