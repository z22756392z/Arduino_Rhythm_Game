#pragma once
#include <Arduino.h>


class Piano {
private:
    uint8_t buzzerPinMode = 8;
    static Piano* instancePtr;
    Piano() {};
public:
    Piano(const Piano& obj)
        = delete;
    static Piano* getInstance();
    void Tone(unsigned short melody, unsigned short duration = 2000);
};

