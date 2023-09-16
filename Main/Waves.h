#pragma once
#include"Wave.h"
#include"Song.h"
#include<Arduino.h>
#define MaxWaveSize 18
class Waves {
public:
    Waves(){}
    Waves(Song* song);
    ~Waves();
    void Update();
    void Render();
    unsigned long GetStartTime(unsigned short index);
    char* GetRating() {
        if (PressCount < 10) return " ";
        float ratio = (float)PressCount / (float)_currentSongSize;
        Serial.print("Ratio: ");
        Serial.println(ratio);
        if (ratio < 0.5) {
            return "F";
        }
        if (ratio < 0.6) {
            return "E";
        }
        if (ratio < 0.7) {
            return "D";
        }
        if (ratio < 0.8) {
            return "C";
        }
        if (ratio < 0.9) {
            return "B";
        }
        if (ratio < 1) {
            return "A";
        }
        if (ratio == 1) {
            return "S";
        }
    }
    bool IsEnd;
    unsigned short PressCount;
    unsigned short ComboCount;
private:
    unsigned long _startTime;
    short _preSongIndex;
    unsigned short _currentSongIndex;
    unsigned short _currentWaveIndex;
    unsigned short _currentSongSize;
    unsigned long _allTime;
    Song* _song;
    Wave _waves[MaxWaveSize];
};
