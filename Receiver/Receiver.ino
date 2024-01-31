#include<LiquidCrystal.h>

LiquidCrystal lcd (2, 3, 4, 5, 6, 7);

#define ldr 8

int val;
int val2;
String duration;
int c=0;  

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ldr, INPUT_PULLUP);
  lcd.begin(16,2);
  lcd.clear();
  lcd.print("Mini Project");
  lcd.setCursor(0,1);
  lcd.print("Mentor: BalaRaju");
  delay(3000);
  lcd.clear();
  lcd.print("Li-Fi Data");
  lcd.setCursor(0,1);
  lcd.print("Transfer System");  
  delay(3000);
  lcd.clear();
  lcd.print("Send any message");
  lcd.setCursor(0,1);
  lcd.print("From Transmitter");
  delay(3000);
  lcd.setCursor(0,0);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(ldr);
  
  while(val == 0)
  {
    int val2 = digitalRead(ldr);
    duration += val2;
    if(duration == "01")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("a");
      c=c+1;
      lcd.print("a");
    }
    if(duration == "001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("b");
      c=c+1;
      lcd.print("b");
    }
    if(duration == "0001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("c");
      c=c+1;
      lcd.print("c");
    }
    if(duration == "00001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("d");
      c=c+1;
      lcd.print("d");
    }
    if(duration == "000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("e");
      c=c+1;
      lcd.print("e");
    }
    if(duration == "0000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("f");
      c=c+1;
      lcd.print("f");
    }
    if(duration == "00000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("g");
      c=c+1;
      lcd.print("g");
    }
    if(duration == "000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("h");
      c=c+1;
      lcd.print("h");
    }
    if(duration == "0000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("i");
      c=c+1;
      lcd.print("i");
    }
    if(duration == "00000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("j");
      c=c+1;
      lcd.print("j");
    }
    if(duration == "000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("k");
      c=c+1;
      lcd.print("k");
    }
    if(duration == "0000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("l");
      c=c+1;
      lcd.print("l");
    }
    if(duration == "00000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("m");
      c=c+1;
      lcd.print("m");
    }
    if(duration == "000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("n");
      c=c+1;
      lcd.print("n");
    }
    if(duration == "0000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("o");
      c=c+1;
      lcd.print("o");
    }
    if(duration == "00000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("p");
      c=c+1;
      lcd.print("p");
    }
    if(duration == "000000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("q");
      c=c+1;
      lcd.print("q");
    }
    if(duration == "0000000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("r");
      c=c+1;
      lcd.print("r");
    }
    if(duration == "00000000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("s");
      c=c+1;
      lcd.print("s");
    }
    if(duration == "000000000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("t");
      c=c+1;
      lcd.print("t");
    }
    if(duration == "0000000000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("u");
      c=c+1;
      lcd.print("u");
    }
    if(duration == "000000000000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("v");
      c=c+1;
      lcd.print("v");
    }
    if(duration == "000000000000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("w");
      c=c+1;
      lcd.print("w");
    }
    if(duration == "0000000000000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("x");
      c=c+1;
      lcd.print("x");
    }
    if(duration == "00000000000000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("y");
      c=c+1;
      lcd.print("y");
    }
    if(duration == "000000000000000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print("z");
      c=c+1;
      lcd.print("z");
    }
    if(duration == "0000000000000000000000000001")
    {
      if(c==16){ 
        lcd.scrollDisplayLeft();
        c=15;
      }
      Serial.print(" ");
      c=c+1;
      lcd.print(" ");
    }
    
    if(val2 == 1)
    {
      duration = "";
      break;
    }
    delay(200);
  }
}