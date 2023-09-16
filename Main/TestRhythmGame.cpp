#include "TestRhythmGame.h"

TestRhythmGame::TestRhythmGame(Song* song)
{
	Serial.println("Test Rhythm Game Create!");

	_render = Renderer::getInstance();
	_inputHandler = InputHandler::getInstance();


	_waves = new Waves(song);
	(*_render).ClearBoard();
	(*_render).Clear();
}

TestRhythmGame::~TestRhythmGame()
{
	Serial.println("Test Rhythm Game Destory!");
	delete _waves;
}

void TestRhythmGame::Update() {
	_waves->Update();
}

void TestRhythmGame::Render() {
	if (_waves->IsEnd) {
		if (_rateFlag)	return;
		_render->ClearBoard();
		_rateFlag = true;
		char* rating = _waves->GetRating();
		if (rating == " ") {
			_render->DrawText("F Rate", 0, 0);
		}
		else {
			_render->DrawText("Rate: ", 0, 0);
			_render->DrawText(rating, 0, 7);
		}
		return;
	}
	(*_render).Clear();
	_waves->Render();
	if (_waves->ComboCount >= 5) {
		_comboRenderCount++;
		if (_comboRenderCount > 4) {
			_render->DrawByte(1, 15, 7);
			if(_comboRenderCount > 8)
				_comboRenderCount = 0;
		}
		else {
			_render->DrawByte(1, 15, 8);
		}
	}
	(*_render).Draw();
	Rate();
}

void TestRhythmGame::Rate() {
	_render->DrawText(_waves->GetRating(), 0, 15);
}
