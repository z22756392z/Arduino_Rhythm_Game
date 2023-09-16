#include "Game.h"

Game::Game(){

}
Game::~Game() {
    if (_currentTest != _testMenu) {
        delete _currentTest;
    }

    delete _testMenu;
}

void Game::Init() {
    Serial.begin(9600);
    inputHandler = InputHandler::getInstance();
    _currentTest = NULL;
    _testMenu = new TestMenu(_currentTest);
    _currentTest = _testMenu;
    
    _testMenu->RegisterTest<TestRhythmGameMenu>("Rhythm Game");
    _testMenu->RegisterTest<TestText>("React Game");
    _testMenu->RegisterTest<TestText>("About Us");
    _testMenu->RegisterTest<TestText>("Credit");

    Serial.println(sizeof(TestRhythmGameMenu));
    Serial.println(sizeof(SongTestMenu));
    Serial.println(sizeof(TestRhythmGame));
    Serial.println(sizeof(TestText));
    Serial.println(sizeof(InputHandler));
    Serial.println(sizeof(Renderer));
    Serial.println(sizeof(Piano));

}


void Game::Update() {
    delay(25);
    inputHandler->Update();

    if (_currentTest != NULL) {
        _renderCount++;
        _currentTest->Update();
        
        if (_renderCount >3 ) {
            _renderCount = 0;
            _currentTest->Render();
        }
        
        if (_currentTest != _testMenu && inputHandler->IsButton3PressOnce() && _currentTest->EnableBackToMenu) {
            delete _currentTest;
            _currentTest = _testMenu;
            _testMenu->Clear();
        }

    }
}