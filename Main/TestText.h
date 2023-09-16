#pragma once
#include "Renderer.h"
#include "Test.h"
class TestText : public Test {
private:
    Renderer* m_renderer = Renderer::getInstance();
public:
    TestText() {
        Serial.println("Clear Test Create!");
        m_renderer->ClearBoard();
        m_renderer->DrawText("Under Dev",0,0); 
    }
    ~TestText() override;

    void Update() override;
    void Render() override;
};
