# PROJETO ARDUINO SIMPLES
# Contextualização
Neste experimento faremos com que o LED embutido vinculado ao pino digital 13 (pino digital
incorporado LED_BUILTIN = 13) pisque. Este é o experimento mais simples que se poder fazer com o
Arduíno
# Lista de componentes:
1 – Arduíno UNO R3

1 – Um cabo de conexão USB

# Esquema do projeto
![image](https://github.com/Beacesconetto/arduino_acender_led/assets/108144622/14b56d1d-1f4c-40f4-ae05-3ced2535432b)

# Projeto no Tinkercad

https://www.tinkercad.com/things/lB75IDot1XK-tremendous-hango-turing/editel?tenant=circuits

# Experimentar e pesquisar:
- Use o comando "Serial.println(<NOME_IDENTIFICADOR>);" no código fonte para exibir
o valor de constantes no monitor serial.
- Para visualizar o monitor serial na IDE Arduíno acesse o menu Ferramentas (Ctrl+Shift+M).
- Exemplo, coloque o comando depois da última linha de comando:
"Serial.println(LED_BUILTIN);".
- No tinkercad use o componente da paleta de saída para
exibir o valor no monitor serial.
- Qual o valor de LOW e HIGH?
- Qual o valor das constantes OUTPUT e INPUT?
- Qual o resultado de apagar a linha 9 (“delay(1000);")?
- Qual o resultado de mover a linha 9 ("delay(1000); ") para o final no bloco de loop()entre as
linhas 12 ("digitalWrite(LED_BUILTIN, HIGH);") e 13 ("}")?

