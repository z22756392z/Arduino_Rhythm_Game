#include "Wave.h"

void Wave::Init(unsigned short melody, int speed, bool isDisplay)
{
    IsDisplay = isDisplay;
    Melody = melody;
    _speed = speed;
    Reset();
}

void Wave::Update() {
    if (IsPlayed || !IsDisplay) return;
}


void Wave::Render() {
    _render->LightLed();
    if (IsPlayed) return;
    _frame++;
    int incr = _x + _frame / _speed;

    if (incr >= 1) {
        _x = incr % 16;
        _frame = 0;
    }
    if(_x < 15 && IsDisplay)
        _render->DrawByte(_y, _x, 1);
    
}

void Wave::Reset() {
    IsPlayed = false;
    _frame = 0;
    //_spriteIndex = 0;
    _x = 0;
    _y = random(0,2);
}

void Wave::Sound() {
    _piano->Tone(Melody, 2000);
}

bool Wave::IsPass() {
    if (_x == 15) {
        IsPlayed = true;
        Sound();
        _x = 100;
        if (!IsDisplay)  return false;
        if (_y == 0) {
            if (_inputHandler->IsButton1Press()) {
                _render->LightPassLed();
                _render->LightLed();
                return true;
            }
            return false;
        }
        if (_inputHandler->IsButton2Press()) {
            _render->LightPassLed();
            _render->LightLed();
            return true;
        }
    }
    return false;
}
