#include "Renderer.h"

Renderer* Renderer::instancePtr;

Renderer::Renderer() {
    lcd.init();
    lcd.backlight();
    lcd.setBacklight(100);
    for (int i = 0; i < 6; i++) {
        lcd.createChar(i + waveStartIndex, wave[i / 2][i % 2]);
    }
    for (int i = 0; i < 2; i++) {
        lcd.createChar(comboStartIndex + i, combo[i]);
    }
    lcd.home();
    pinMode(passLedPin, OUTPUT);
}

Renderer* Renderer::getInstance() {
    if (instancePtr == NULL)
    {
        instancePtr = new Renderer();

        return instancePtr;
    }
    else
    {
        return instancePtr;
    }
}

void Renderer::LightPassLed(unsigned long duration = 400) {
    passLedStartTime = millis();
    this->duration = duration;
}

void Renderer::DrawByte(int y, int x, int spriteIndex) {
    board[y * 16 + x] = spriteIndex;
}

void Renderer::DrawText(char* text, int y, int x) {
    lcd.setCursor(x, y);
    lcd.print(text);
}

void Renderer::Draw() {
    lcd.clear();
    lcd.setCursor(14, 0);
    lcd.printByte(-1);
    lcd.setCursor(14, 1);
    lcd.printByte(-1);

    for (int i = 0; i < 32; i++) {
        if (board[i] != -1) {
            lcd.setCursor(i % 16, i / 16);
            lcd.printByte(board[i]);
        }
    }
}

void Renderer::LightLed() {
    if (millis() < passLedStartTime + duration) {
        digitalWrite(passLedPin, HIGH);
    }
    else {
        digitalWrite(passLedPin, LOW);
    }
}

void Renderer::Clear() {
    for (int i = 0; i < 32; i++) {
        board[i] = -1;
    }
}

void Renderer::ClearBoard() {
    lcd.clear();
}
