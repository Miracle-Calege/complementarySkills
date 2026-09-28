int pinoLed=9;
int pinoA0=A0;
void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int leitura=analogRead(pinoA0);
// float valorConvertido=255.0*leitura/1023.0;//podemos usar a funcao map(leitura,inicio,fim, inicio_escala_desejada,fim_escala_desejada)
  int valorConvertido=map(leitura,0,1023,0,255);
  analogWrite(pinoLed,valorConvertido);
  delay(30);

}
