#include "Piano.h"
Piano* Piano::instancePtr;

Piano* Piano::getInstance() {
    if (instancePtr == NULL)
    {
        instancePtr = new Piano();

        return instancePtr;
    }
    else
    {
        return instancePtr;
    }
}

void Piano::Tone(unsigned short melody, unsigned short duration)
{   
    tone(buzzerPinMode, melody, duration);
}
