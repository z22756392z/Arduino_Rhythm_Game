#include"Waves.h"

Waves::Waves(Song* song) 
    :IsEnd(false), _currentSongIndex(0), _currentWaveIndex(0),_song(song),_startTime(millis()),PressCount(0),ComboCount(0),_currentSongSize(0),_allTime(300),_preSongIndex(0)
{
    Serial.println("Waves Create!");
}

Waves::~Waves(){
    Serial.println("Waves Destoryed!");
}

void Waves::Update() {
    bool flag = false;
    for (int i = 0; i < MaxWaveSize; i++) {
        if (_waves[i].IsPlayed) continue;
        flag = true;
        _waves[i].Update();
        if (_waves[i].IsPass() && _waves[i].IsDisplay) {
            _currentSongSize++;
            ComboCount++;
            PressCount++;
        }
        else {
            if (_waves[i].IsDisplay && _waves[i].IsPlayed) {
                _currentSongSize++;
                ComboCount = 0;
            }
        }
    }

    if (_currentSongIndex == _song->size) {
        if (!flag && !IsEnd) {
            IsEnd = true;
        }
        return;
    }
    while(millis() > _startTime + GetStartTime(_currentSongIndex) && _currentSongIndex < _song->size){
        
        if (random(0, _song->difficulty) == 0) {
            _waves[_currentWaveIndex].Init(_song->melody(_currentSongIndex), 1);
        }
        else {
            _waves[_currentWaveIndex].Init(_song->melody(_currentSongIndex), 1, false);
        }
        _currentWaveIndex = _currentWaveIndex + 1 > MaxWaveSize - 1 ? 0 : _currentWaveIndex + 1;
        _currentSongIndex++;
    }
}

void Waves::Render() {
    for (int i = 0; i < MaxWaveSize; i++) {
        _waves[i].Render();
    }
}

unsigned long Waves::GetStartTime(unsigned short index) {
    Serial.println(_preSongIndex);
    if (_preSongIndex == index)  return _allTime;

    if (_preSongIndex < index) {
        _allTime += _song->beat(_preSongIndex) * 500 * _song->BT;
        _preSongIndex++;
        return  _allTime;
    }
    
    return _allTime;
}
