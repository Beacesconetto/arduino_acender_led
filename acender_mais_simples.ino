void setup()
2. {
3.     // Porta 13 (LED_BUILTIN) em modo de saída (escrita)
4.     pinMode(LED_BUILTIN, OUTPUT);
5. }
6.
7. void loop()
8. {
  
9.      // Aguarda 1000 milésimos de segundo      
        delay(1000); 
  
        // Desliga o LED
10.     digitalWrite(LED_BUILTIN, LOW); 

        // Aguarda 1000 milésimos de segundo
11.     delay(1000);

        // Liga o LED
12.     digitalWrite(LED_BUILTIN, HIGH); 
  
13. }
