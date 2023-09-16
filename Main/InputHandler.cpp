#include "InputHandler.h"

InputHandler* InputHandler::instancePtr;

InputHandler::InputHandler() {
    pinMode(pinButton1, INPUT);
    pinMode(pinButton2, INPUT);
    pinMode(pinButton3, INPUT);
    isButton1Pressed = false;
    isButton2Pressed = false;
    isButton3Pressed = false;
}

InputHandler* InputHandler::getInstance() {
    if (instancePtr == NULL)
    {
        instancePtr = new InputHandler();

        return instancePtr;
    }
    else
    {
        return instancePtr;
    }
}

bool InputHandler::IsButton1Press()const {
    if (millis() < button1StartTime + button1ThresholdTime /* && millis() > button1StartTime + 30*/)
        if (millis() < button1PressCountTime + button1ThresholdTime)
            return true;
    return false;
}

bool InputHandler::IsButton2Press()const{
  if(millis() < button2StartTime + button2ThresholdTime /*&& millis() > button2StartTime + 30*/)
    if(millis() < button2PressCountTime + button2ThresholdTime)
      return true;
  return false;
}

bool InputHandler::IsButton1PressOnce()const {
    if (millis() < button1StartTime + button1ThresholdTime && isButton1Pressed && isButton1PrevPressed != isButton1Pressed) {

        return true;
    }
    return false;
}
bool InputHandler::IsButton2PressOnce()const {
    if (millis() < button2StartTime + button2ThresholdTime && isButton2Pressed && isButton2PrevPressed != isButton2Pressed) {

        return true;
    }
    return false;
}

bool InputHandler::IsButton3PressOnce() {
    if (millis() < button3StartTime + button3ThresholdTime && isButton3Pressed && isButton3PrevPressed != isButton3Pressed && button3PressFlag) {
        button3PressFlag = false;
        return true;
    }
    return false;
}

void InputHandler::Update() {
    isButton1PrevPressed = isButton1Pressed;
    isButton2PrevPressed = isButton2Pressed;
    isButton3PrevPressed = isButton3Pressed;
    isButton1Pressed = digitalRead(pinButton1);
    isButton2Pressed = digitalRead(pinButton2);
    isButton3Pressed = digitalRead(pinButton3);
    button3PressFlag = true;

    if (isButton1Pressed == HIGH) {
        if (isButton1PrevPressed != isButton1Pressed) {
            button1PressCountTime = millis();
        }
        button1StartTime = millis();
    }

    if (isButton2Pressed == HIGH) {
        if (isButton2PrevPressed != isButton2Pressed) {
            button2PressCountTime = millis();
        }
        button2StartTime = millis();
    }

    if (isButton3Pressed == HIGH) {
        button3StartTime = millis();
    }
}
