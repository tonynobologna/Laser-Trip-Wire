int buzzer=0;
int count=0;

void setup() {
pinMode(buzzer, OUTPUT); //Speaker
pinMode(10, OUTPUT); // RED part of 2 colour led
pinMode(11, OUTPUT); // GREEN part of 2 colour leds
// LEDS FOR COUNT
pinMode(1, OUTPUT); 
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(12, OUTPUT);
}
void loop()
{
  if(analogRead(0) > 10) // If photocell is reading greater then preset value. Then alls well
    {
      digitalWrite(buzzer, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);     
    }
  if(analogRead(0) < 9) // If photocell is reading less then preset value. Then alarm and leds go off.
   {
     digitalWrite(11, LOW);
     digitalWrite(buzzer, HIGH);
     digitalWrite(10, HIGH);
     delay(500);
     digitalWrite(buzzer, LOW);
     digitalWrite(10, HIGH);
     delay(500);
     count ++;
   } 
   if (count==1)
     {
       digitalWrite(1, HIGH);
     }
     if (count==2)
     {
       digitalWrite(2, HIGH);
     }
     if (count==3)
     {
       digitalWrite(3, HIGH);
     }
     if (count==4)
     {
       digitalWrite(4, HIGH);
     }
     if (count==5)
     {
       digitalWrite(5, HIGH);
     }
     if (count==6)
     {
       digitalWrite(6, HIGH);
     }
     if (count==7)
     {
       digitalWrite(7, HIGH);
     }
     if (count==8)
     {
       digitalWrite(8, HIGH);
     }
     if (count==9)
     {
       digitalWrite(12, HIGH);
       delay(500);
       digitalWrite(12, LOW);
       delay(500);
     }
}
