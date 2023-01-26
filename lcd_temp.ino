/*
 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints Temperature to the LCD
 
 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 Modified by Harjot Gill to print temperature
 
 This example code is in the public domain. */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(A0, INPUT); //declaring pin as input data to read 
  Serial.begin(9600); 
}

void loop() {

  float sensor_reading,voltage,celsius,farenheit;  //declaring variables
  
  sensor_reading=analogRead(A0);          //reading data from sensor
  voltage= sensor_reading*(5000/1024.0);      
  celsius=(voltage-500)/10;    		  	//converting readings to a temperature 
  farenheit=(celsius * 9.0/5.0) + 32;

 // set the cursor to column 0, line 0
  lcd.setCursor(0, 0);
  
  lcd.print(celsius); lcd.print(" degrees C");  
  // set the cursor to column 0, line 0
  lcd.setCursor(0, 1);                    //print temp values to lcd 
 lcd.print(farenheit); lcd.print(" degrees F");  
  delay(100);
  
}
 