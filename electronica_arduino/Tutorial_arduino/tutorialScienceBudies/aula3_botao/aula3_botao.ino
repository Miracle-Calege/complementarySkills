void setup()
{
 pinMode(12,OUTPUT);//pino de saída
 pinMode(2,INPUT); //pino de leitura
}

void loop()
{
  if(digitalRead(2) == HIGH){//se o botao for pressionado
    digitalWrite(12,HIGH);//a led vai acender
  }else{
     digitalWrite(12,LOW);//caso contrário ficará apagada
  }
 
}
