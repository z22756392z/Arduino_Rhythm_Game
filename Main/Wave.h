#pragma once
#include"Renderer.h"
#include"Piano.h"
#include"InputHandler.h"


class Wave {
private:
    unsigned char _speed;
    unsigned char _x;
    unsigned char _y;
    unsigned char _frame;
    //unsigned char _spriteIndex;

    bool _isPass;

    Renderer* _render;
    InputHandler* _inputHandler;
    Piano* _piano;
public:
    Wave() : Melody(0), _speed(0),IsPlayed(true), IsDisplay(true)
    {
        _render = Renderer::getInstance();
        _inputHandler = InputHandler::getInstance();
        _piano = Piano::getInstance();
    }
    void Init(unsigned short melody, int speed, bool isDisplay = true);
    ~Wave() {};
    bool IsPass();
    void Sound();
    void Update();
    void Render();
    void Reset();

    bool IsPlayed;
    bool IsDisplay;
    unsigned short Melody;
};
