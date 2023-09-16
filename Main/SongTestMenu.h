#pragma once
#include "Test.h"
#define MaxSongSize 5

template <typename T>
Test* NewTestSong(Song* song)
{
    return new T(song);
}

class SongTestMenu :public Test
{
 private:
     Song _songs[MaxSongSize];
     TestData m_Tests[MaxTestSize];
     short _currentSongSize = 0;
     Test*& m_CurrnetTest;
     short m_currentOption = 0;
     Renderer* m_renderer = Renderer::getInstance();
     InputHandler* m_inputHandler = InputHandler::getInstance();
 public:
     SongTestMenu(Test*& currentTest):m_CurrnetTest(currentTest) {
         
     }
     void Update() override {
         if (m_CurrnetTest != this)   return;
         if (m_inputHandler->IsButton1PressOnce()) {
             m_currentOption = m_currentOption - 1 < -1 ? -1 : m_currentOption - 1;
             Clear();
         }
         if (m_inputHandler->IsButton2PressOnce()) {
             m_currentOption = m_currentOption + 1 > _currentSongSize - 1 ? _currentSongSize - 1 : m_currentOption + 1;
             Clear();
         }
         if (IsExitOption())   return;
         if (m_inputHandler->IsButton3PressOnce()) {
             if (m_currentOption < 0 ) return;
             m_CurrnetTest = m_Tests[m_currentOption].testSong(&_songs[m_currentOption]);
             Clear();
         }
     }
     void Render() override {
         m_renderer->DrawText("O", 0, 15);
         if (m_currentOption == -1) {
             m_renderer->DrawText(m_Tests[m_currentOption + 1].name, 1, 0);
             return;
         }
         if (m_currentOption == _currentSongSize - 1) {
             m_renderer->DrawText(m_Tests[m_currentOption].name, 0, 3);
             return;
         }
         m_renderer->DrawText(m_Tests[m_currentOption].name, 0, 1);
         m_renderer->DrawText(m_Tests[m_currentOption + 1].name, 1, 0);


     }
     void Clear() {
         m_renderer->ClearBoard();
     }

     template<typename T>
     void RegisterSong(Song song)
     {
         Serial.print("Registering test song");
         Serial.print(song.name);
         Serial.print('\n');
         m_Tests[_currentSongSize] = TestData(song.name, NewTestSong<T>);
         _songs[_currentSongSize] = song;
         _currentSongSize++;
         
     }
     template<typename T>
     void RegisterTest(char* name)
     {
         Serial.print("Registering test ");
         Serial.print(name);
         Serial.print('\n');
         m_Tests[_currentSongSize] = TestData(name, NewTest<T>);
         _currentSongSize++;
     }
     bool IsExitOption() {
         return m_Tests[m_currentOption].name == "Exit";
     }
};
