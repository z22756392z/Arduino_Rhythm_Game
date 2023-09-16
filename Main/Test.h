#pragma once
#include <Arduino.h>
#include "Renderer.h"
#include "InputHandler.h"
#include "Song.h"

#define MaxTestSize 10

class Test {
public:
    Test() {};
    virtual ~Test() {};

    virtual void Update() {};
    virtual void Render() {};

    bool EnableBackToMenu = true;
};

struct TFunc
{
    typedef Test* (*testFunc)();
    typedef Test* (*testSongFunc)(Song* song);
};

template <typename T>
Test* NewTest()
{
    return new T();
}
 
class TestData {
public:
    char* name;
    TFunc::testFunc test;
    TFunc::testSongFunc testSong;
    TestData(char* name, TFunc::testFunc test) :name(name), test(test) {}
    TestData(char* name, TFunc::testSongFunc testSong) :name(name), testSong(testSong) {}
    TestData() {};
};


class TestMenu : public Test
{
protected:
    TestData m_Tests[MaxTestSize];
    Test*& m_CurrnetTest;
    unsigned char m_TestSize = 0;
    char m_currentOption = 0; // !!!! µÊ≥Ê≈‹§∆
    Renderer* m_renderer = Renderer::getInstance();
    InputHandler* m_inputHandler = InputHandler::getInstance();
public:
    TestMenu(Test*& currentTestPointer);
    void Update() override;
    void Render() override;
    void Clear();
    template<typename T>
    void RegisterTest(char* name)
    {
        Serial.print("Registering test ");
        Serial.print(name);
        Serial.print('\n');
        m_Tests[m_TestSize] = TestData(name, NewTest<T>);
        m_TestSize++;
    }
};
