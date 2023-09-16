#pragma once
#include <Arduino.h>

class InputHandler {
private:
    static InputHandler* instancePtr;
    InputHandler();

    const unsigned char pinButton1 = 2;
    const unsigned char pinButton2 = 3;
    const unsigned char pinButton3 = 4;

    bool isButton1PrevPressed;
    bool isButton2PrevPressed;
    bool isButton3PrevPressed;

    unsigned long button1PressCountTime;
    unsigned long button2PressCountTime;

    bool isButton1Pressed;
    bool isButton2Pressed;
    bool isButton3Pressed;

    unsigned long  button1StartTime = 0;
    unsigned long  button2StartTime = 0;
    unsigned long  button3StartTime = 0;

    unsigned short  button1ThresholdTime = 200;
    unsigned short  button2ThresholdTime = 200;
    unsigned short  button3ThresholdTime = 200;

    unsigned short  button1PressMaxTime = 300;
    unsigned short  button2PressMaxTime = 300;

    bool button3PressFlag = true;
public:
    InputHandler(const InputHandler& obj) = delete;
    void operator=(InputHandler const&) = delete;

    static InputHandler* getInstance();
    bool IsButton1Press()const;
    bool IsButton2Press()const;

    bool IsButton1PressOnce()const;
    bool IsButton2PressOnce()const;
    bool IsButton3PressOnce();
    void Update();
};
