
#include <Wire.h>
#include <Adafruit_MCP4725.h>
Adafruit_MCP4725 MCP4725;

  void setup() {
  
  MCP4725.begin(0x60);
  Serial.begin(9600);
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(2, INPUT);
 


  }

void loop() 

{
if ( ((PIND & B01111000) == B00100000) && ((PIND & B00000100) == B00000100))
{
  MCP4725.setVoltage((2.13*4125)/5,false);
  Serial.println("G1");
}

 
if ( ((PIND & B01111000) == B00010000) && ((PIND & B00000100) == B00000100))
{
  MCP4725.setVoltage((2.05*4125)/5,false);
  Serial.println("F1");
  //ok
}

if ( ((PIND & B01111000) == B00001000) && ((PIND & B00000100) == B00000100))
{
  MCP4725.setVoltage((2.1*4125)/5,false);
  Serial.println("G1#");
}
if ( ((PIND & B01111000) == B01000000) && ((PIND & B00000100) == B00000100))
{
  MCP4725.setVoltage((2.239*4125)/5,false);
  Serial.println("F1#");
}
if ( ((PIND & B01111000) == B01000000) && ((PIND & B10000000) == B10000000))
{

  Serial.println("A2#");
}
 
if ( ((PIND & B01111000) == B00001000) && ((PIND & B10000000) == B10000000))
{
  MCP4725.setVoltage((2.32*4125)/5,false);
  Serial.println("C2");
}  
if ( ((PIND & B01111000) == B00010000) && ((PIND & B10000000) == B10000000))
{
  MCP4725.setVoltage((2.228*4125)/5,false);
  Serial.println("A2");
}

if ( ((PIND & B01111000) == B00100000) && ((PIND & B10000000) == B10000000))
{
  MCP4725.setVoltage((2.29*4125)/5,false);
  Serial.println("B2");
}

if ( ((PIND & B01111000) == B01000000) && ((PINB & B00000001) == B00000001))
{
  MCP4725.setVoltage((2.405*4125)/5,false);
  Serial.println("D2");
}
if ( ((PIND & B01111000) == B00100000) && ((PINB & B00000001) == B00000001))
{
   MCP4725.setVoltage((2.417*4125)/5,false);
  Serial.println("D2#");
}
if ( ((PIND & B01111000) == B00010000) && ((PINB & B00000001) == B00000001))
{
  MCP4725.setVoltage((2.429*4125)/5,false);
  Serial.println("C2#");
}
if ( ((PIND & B01111000) == B00001000) && ((PINB & B00000001) == B00000001))
{
  MCP4725.setVoltage((2.494*4125)/5,false);
  Serial.println("E2");
}
if ( ((PIND & B01111000) == B01000000) && ((PINB & B00000010) == B00000010))
{
  MCP4725.setVoltage((4*4125)/5,false);
  Serial.println("F2#");
}
if ( ((PIND & B01111000) == B00100000) && ((PINB & B00000010) == B00000010))
{
  MCP4725.setVoltage((2.6*4125)/5,false);
  Serial.println("G2");
}
if ( ((PIND & B01111000) == B00010000) && ((PINB & B00000010) == B00000010))
{
  MCP4725.setVoltage((2.509*4125)/5,false);
  Serial.println("F2");
  //ok
}
if ( ((PIND & B01111000) == B00001000) && ((PINB & B00000010) == B00000010))
{
  MCP4725.setVoltage((4*4125)/5,false);
  Serial.println("G2#");
}
if ( ((PIND & B01111000) == B01000000) && ((PINB & B00000100) == B00000100))
{
MCP4725.setVoltage((4*4125)/5,false);
Serial.println("A3#");
}
if ( ((PIND & B01111000) == B00100000) && ((PINB & B00000100) == B00000100))
{
MCP4725.setVoltage((2.76*4125)/5,false);
Serial.println("B3");
}
if ( ((PIND & B01111000) == B00010000) && ((PINB & B00000100) == B00000100))
{
MCP4725.setVoltage((2.69*4125)/5,false);
Serial.println("A3");
}
if ( ((PIND & B01111000) == B00001000) && ((PINB & B00000100) == B00000100))
{
MCP4725.setVoltage((2.795*4125)/5,false);
Serial.println("C3");
}
if ( ((PIND & B01111000) == B01000000) && ((PINB & B00001000) == B00001000))
{
MCP4725.setVoltage((2.85*4125)/5,false);
Serial.println("D3");
}
if ( ((PIND & B01111000) == B00100000) && ((PINB & B00001000) == B00001000))
{
MCP4725.setVoltage((2.9*4125)/5,false);
Serial.println("D3#");
}
if ( ((PIND & B01111000) == B00010000) && ((PINB & B00001000) == B00001000))
{
MCP4725.setVoltage((2.89*4125)/5,false);
Serial.println("C3#");
}
if ( ((PIND & B01111000) == B00001000) && ((PINB & B00001000) == B00001000))
{
MCP4725.setVoltage((2.94*4125)/5,false);
Serial.println("E3");

}


if ( ((PIND & B01111000) == B01000000) && ((PINB & B00010000) == B00010000))
{
MCP4725.setVoltage((3.05*4125)/5,false);
Serial.println("F3#");
}
if ( ((PIND & B01111000) == B00100000) && ((PINB & B00010000) == B00010000))
{
MCP4725.setVoltage((3.05*4125)/5,false);
Serial.println("G3");
}
if ( ((PIND & B01111000) == B00010000) && ((PINB & B00010000) == B00010000))
{
MCP4725.setVoltage((2.97*4125)/5,false);
Serial.println("F3");
}
if ( ((PIND & B01111000) == B00001000) && ((PINB & B00010000) == B00010000))
{

Serial.println("G3#");
}
if ( ((PIND & B01111000) == B01000000) && ((PINB & B00100000) == B00100000))
{
//MCP4725.setVoltage((3.174*4125)/5,false);
MCP4725.setVoltage((0*4125)/5,false);
Serial.println("A4#");
//ok
}
if ( ((PIND & B01111000) == B00100000) && ((PINB & B00100000) == B00100000))
{
MCP4725.setVoltage((3.195*4125)/5,false);
Serial.println("B4");
//ok
}
if ( ((PIND & B01111000) == B00010000) && ((PINB & B00100000) == B00100000))
{
MCP4725.setVoltage((3.11*4125)/5,false);
Serial.println("A4");
//ok
}
if ( ((PIND & B01111000) == B00001000) && ((PINB & B00100000) == B00100000))
{
MCP4725.setVoltage((3.25*4125)/5,false);
Serial.println("C4");
//ok
}

}
