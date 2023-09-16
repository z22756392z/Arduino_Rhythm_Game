#pragma once
#include <Arduino.h>
#include "InputHandler.h"
#include "TestRhythmGame.h"
#include "TestText.h"
#include "TestRhythmGameMenu.h"

class Game {
private:
    InputHandler* inputHandler = InputHandler::getInstance();
    Test* _currentTest;
    TestMenu* _testMenu;

    unsigned char _renderCount = 0;
public:
    Game();
    ~Game();
    void Init();
    void Update();
};
