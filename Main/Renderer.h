#pragma once
#include <Arduino.h>
#include<Wire.h>
#include <LiquidCrystal_I2C.h>
#if defined(ARDUINO) && ARDUINO >= 100
#define printByte(args)  write(args);
#else
#define printByte(args)  print(args,BYTE);
#endif

class Renderer {
private:
  static Renderer* instancePtr;
  Renderer();
  
  uint8_t wave[3][2][8]  = 
  {
    {
      {0x1c,0xd,0xf,0xf,0xf,0xf,0xd,0x1c},
      {0x1c,0xd,0x3,0x3,0x3,0x3,0xd,0x1c}
    },
    {
      {0xe,0x7,0x7,0x7,0x7,0x7,0x7,0xe},
      {0xe,0x7,0x13,0x13,0x13,0x13,0x17,0xe}
    },
    {
      {0x7,0x3,0x3,0x3,0x3,0x3,0x3,0x7},
      {0x16,0x17,0x1b,0x1b,0x1b,0x1b,0x17,0x16}
    },
  };
  uint8_t combo[2][8] =
  {
      {0x0,0x0,0x4,0xA,0xA,0x4,0x0,0x0},
      {0xe,0xA,0x11,0x11,0x11,0x11,0xA,0xe}
  };
  const short waveStartIndex = 0;
  const unsigned char comboStartIndex = 7;
  short board[32] = {0};
  LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,20,4);

  const unsigned char passLedPin = 11;
  unsigned long passLedStartTime = 0;
  unsigned short duration=0;
public:
    Renderer(const Renderer& obj)
    = delete;
    static Renderer* getInstance();
    void LightPassLed(unsigned long duration = 400);
    void Draw();
    void LightLed();
    void DrawText(char* text, int y, int x);
    void DrawByte(int y, int x,int spriteIndex);
    void Clear();
    void ClearBoard();
};
