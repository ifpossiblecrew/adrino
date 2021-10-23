#include <LiquidCrystal.h>
#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

String message = String("SELVA KUMAR DON OF EEE");
int length;

void setup() 
{
   length = message.length();
}

void loop()
{
  for(int i = 0; i < length; i++)
  {
    ClearRow(0);
    lcd.print(message.substring(i,i+15));
    delay(500);
  }
}

void ClearRow(int rowNum)
{
  lcd.setCursor(0,rowNum);
  lcd.print("                 ");
  lcd.setCursor(0,rowNum);
}
