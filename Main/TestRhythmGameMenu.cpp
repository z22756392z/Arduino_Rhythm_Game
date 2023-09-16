#include "TestRhythmGameMenu.h"

TestRhythmGameMenu::TestRhythmGameMenu()
{
    Serial.println("Test Rhythm Game Menu Create!");

    EnableBackToMenu = false;
    
    inputHandler = InputHandler::getInstance();
    _currentRhythmGame = NULL;
    _songTestMenu = new SongTestMenu(_currentRhythmGame);
    _currentRhythmGame = _songTestMenu;

    _songTestMenu->RegisterSong<TestRhythmGame>(Song(GetSkyCityMelody, GetSkyCityBeat, "Sky City", 0.3, 52, 1));
    _songTestMenu->RegisterSong<TestRhythmGame>(Song(GetCanonMelody, GetCanonBeat, "Canon", 0.3, 169, 3));
    _songTestMenu->RegisterSong<TestRhythmGame>(Song(GetStayMelody, GetStayBeat, "Stay", 0.3, 271, 3));
    _songTestMenu->RegisterSong<TestRhythmGame>(Song(GetSakulaMelody, GetSakulaBeat, "Sakula", 0.2, 298, 3));

    _songTestMenu->RegisterTest<TestText>("Exit");
}

TestRhythmGameMenu::~TestRhythmGameMenu()
{
    Serial.println("Test Rhythm Game Menu Destory!");

    if (_songTestMenu != _currentRhythmGame) {
        delete _currentRhythmGame;
    }
    delete _songTestMenu;
}

void TestRhythmGameMenu::Update()
{
    if (_songTestMenu->IsExitOption()) {
        _currentRhythmGame->Update();
        EnableBackToMenu = true;
        return;
    }

    EnableBackToMenu = false;
    if (_currentRhythmGame != NULL) {

        _currentRhythmGame->Update();

        if (_currentRhythmGame != _songTestMenu && inputHandler->IsButton3PressOnce() && _currentRhythmGame->EnableBackToMenu) {
            delete _currentRhythmGame;
            _currentRhythmGame = _songTestMenu;
            _songTestMenu->Clear();
        }

    }
}

void TestRhythmGameMenu::Render()
{
    if (_currentRhythmGame != NULL)
        _currentRhythmGame->Render();
    
}