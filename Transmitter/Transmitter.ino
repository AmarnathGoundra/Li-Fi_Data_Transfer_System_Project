int led_pin=13;
//int data[27]={125, 250, 500, 625, 875, 1000, 1250, 1500, 1625, 1875, 2000, 2250, 2500, 2625, 2875, 3125, 3250, 3500, 3625, 3875, 4125, 4250, 4500, 4625, 4875, 5125, 5250};

void setup() {
Serial.begin(9600);
pinMode(led_pin,OUTPUT);

}

char rx_byte = 0;

void loop()

{ 
  if(Serial.available()>0){
    rx_byte = Serial.read();
  }
  if(rx_byte=='a')
  {
    digitalWrite(led_pin,HIGH);

    delay(125);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }
  if(rx_byte=='b')
  {
    digitalWrite(led_pin,HIGH);

    delay(250);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }
  if(rx_byte=='c')
  {
    digitalWrite(led_pin,HIGH);

    delay(500);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='d')
  {
    digitalWrite(led_pin,HIGH);

    delay(625);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='e')
  {
    digitalWrite(led_pin,HIGH);

    delay(875);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='f')
  {
    digitalWrite(led_pin,HIGH);

    delay(1000);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='g')
  {
    digitalWrite(led_pin,HIGH);

    delay(1250);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='h')
  {
    digitalWrite(led_pin,HIGH);

    delay(1500);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='i')
  {
    digitalWrite(led_pin,HIGH);

    delay(1625);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='j')
  {
    digitalWrite(led_pin,HIGH);

    delay(1875);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='k')
  {
    digitalWrite(led_pin,HIGH);

    delay(2000);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='l')
  {
    digitalWrite(led_pin,HIGH);

    delay(2250);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='m')
  {
    digitalWrite(led_pin,HIGH);

    delay(2500);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='n')
  {
    digitalWrite(led_pin,HIGH);

    delay(2625);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='o')
  {
    digitalWrite(led_pin,HIGH);

    delay(2875);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='p')
  {
    digitalWrite(led_pin,HIGH);

    delay(3125);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='q')
  {
    digitalWrite(led_pin,HIGH);

    delay(3250);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='r')
  {
    digitalWrite(led_pin,HIGH);

    delay(3500);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='s')
  {
    digitalWrite(led_pin,HIGH);

    delay(3625);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='t')
  {
    digitalWrite(led_pin,HIGH);

    delay(3875);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='u')
  {
    digitalWrite(led_pin,HIGH);

    delay(4125);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='v')
  {
    digitalWrite(led_pin,HIGH);

    delay(4250);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='w')
  {
    digitalWrite(led_pin,HIGH);

    delay(4500);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='x')
  {
    digitalWrite(led_pin,HIGH);

    delay(4625);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='y')
  {
    digitalWrite(led_pin,HIGH);

    delay(4875);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte=='z')
  {
    digitalWrite(led_pin,HIGH);

    delay(5125);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  if(rx_byte==' ')
  {
    digitalWrite(led_pin,HIGH);

    delay(5250);

    digitalWrite(led_pin,LOW);

    delay(500);  
  }

  
/*  
  for(int i=0; i<27; i++)
  {
    digitalWrite(led_pin,HIGH);

    delay(data[i]);

    digitalWrite(led_pin,LOW);

    delay(500);    
  }
*/  
}