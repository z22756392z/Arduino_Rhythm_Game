#pragma once
#include "Game.h"
Game game;
/*
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#if defined(ARDUINO) && ARDUINO >= 100
#define printByte(args)  write(args);
#else
#define printByte(args)  print(args,BYTE);
#endif
LiquidCrystal_I2C mainlcd(0x27,20,4);
void test(){
  mainlcd.init();                      
  mainlcd.backlight();
  mainlcd.home();
  mainlcd.print("Hello world...");
  delay(10000);
}
*/

void setup() {
  //test();
  game.Init();
}

void loop() {
  game.Update();
}
