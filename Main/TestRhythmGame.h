#pragma once
#include "Test.h"
#include "Renderer.h"
#include "InputHandler.h"
#include "Waves.h"
class TestRhythmGame : public Test {

public:
    TestRhythmGame(Song* song);
    ~TestRhythmGame() override;

    void Update() override;
    void Render() override;
    void Rate();

private:
    Waves* _waves;
    Renderer* _render;
    InputHandler* _inputHandler;
    unsigned char _comboRenderCount;
    bool _rateFlag = false;
};
