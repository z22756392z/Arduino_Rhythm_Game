#pragma once

#include "Test.h"
#include "SongTestMenu.h"
#include "TestRhythmGame.h"
#include "TestText.h"

#define MaxSongSize 10

class TestRhythmGameMenu : public Test
{
private:
	InputHandler* inputHandler;
	Test* _currentRhythmGame;
	SongTestMenu* _songTestMenu;
public:
	TestRhythmGameMenu();
	~TestRhythmGameMenu() override;
	void Update() override;
	void Render() override;
    static unsigned short GetSakulaMelody(unsigned short index) {
        if (index < 10) {
            if (index == 0) return 293;
            if (index == 1) return 0;
            if (index == 2) return 293;
            if (index == 3) return 261;
            if (index == 4) return 293;
            if (index == 5) return 0;
            if (index == 6) return 293;
            if (index == 7) return 261;
            if (index == 8) return 293;
            if (index == 9) return 0;
        }
        if (index < 20) {
            if (index == 10) return 293;
            if (index == 11) return 261;
            if (index == 12) return 293;
            if (index == 13) return 349;
            if (index == 14) return 293;
            if (index == 15) return 0;
            if (index == 16) return 293;
            if (index == 17) return 261;
            if (index == 18) return 293;
            if (index == 19) return 0;
        }
        if (index < 30) {
            if (index == 20) return 293;
            if (index == 21) return 261;
            if (index == 22) return 293;
            if (index == 23) return 349;
            if (index == 24) return 392;
            if (index == 25) return 440;
            if (index == 26) return 392;
            if (index == 27) return 440;
            if (index == 28) return 293;
            if (index == 29) return 261;
        }
        if (index < 40) {
            if (index == 30) return 293;
            if (index == 31) return 261;
            if (index == 32) return 392;
            if (index == 33) return 440;
            if (index == 34) return 293;
            if (index == 35) return 261;
            if (index == 36) return 293;
            if (index == 37) return 261;
            if (index == 38) return 392;
            if (index == 39) return 440;
        }
        if (index < 50) {
            if (index == 40) return 293;
            if (index == 41) return 261;
            if (index == 42) return 293;
            if (index == 43) return 261;
            if (index == 44) return 349;
            if (index == 45) return 329;
            if (index == 46) return 349;
            if (index == 47) return 329;
            if (index == 48) return 293;
            if (index == 49) return 261;
        }
        if (index < 60) {
            if (index == 50) return 392;
            if (index == 51) return 440;
            if (index == 52) return 293;
            if (index == 53) return 261;
            if (index == 54) return 293;
            if (index == 55) return 261;
            if (index == 56) return 392;
            if (index == 57) return 440;
            if (index == 58) return 293;
            if (index == 59) return 261;
        }
        if (index < 70) {
            if (index == 60) return 293;
            if (index == 61) return 261;
            if (index == 62) return 392;
            if (index == 63) return 440;
            if (index == 64) return 523;
            if (index == 65) return 698;
            if (index == 66) return 659;
            if (index == 67) return 698;
            if (index == 68) return 659;
            if (index == 69) return 587;
        }
        if (index < 80) {
            if (index == 70) return 523;
            if (index == 71) return 440;
            if (index == 72) return 392;
            if (index == 73) return 440;
            if (index == 74) return 293;
            if (index == 75) return 261;
            if (index == 76) return 293;
            if (index == 77) return 261;
            if (index == 78) return 392;
            if (index == 79) return 440;
        }
        if (index < 90) {
            if (index == 80) return 293;
            if (index == 81) return 261;
            if (index == 82) return 293;
            if (index == 83) return 261;
            if (index == 84) return 392;
            if (index == 85) return 440;
            if (index == 86) return 293;
            if (index == 87) return 261;
            if (index == 88) return 293;
            if (index == 89) return 261;
        }
        if (index < 100) {
            if (index == 90) return 349;
            if (index == 91) return 329;
            if (index == 92) return 349;
            if (index == 93) return 329;
            if (index == 94) return 293;
            if (index == 95) return 261;
            if (index == 96) return 392;
            if (index == 97) return 440;
            if (index == 98) return 523;
            if (index == 99) return 587;
        }
        if (index < 110) {
            if (index == 100) return 523;
            if (index == 101) return 440;
            if (index == 102) return 392;
            if (index == 103) return 293;
            if (index == 104) return 349;
            if (index == 105) return 392;
            if (index == 106) return 440;
            if (index == 107) return 293;
            if (index == 108) return 293;
            if (index == 109) return 261;
        }
        if (index < 120) {
            if (index == 110) return 293;
            if (index == 111) return 293;
            if (index == 112) return 293;
            if (index == 113) return 261;
            if (index == 114) return 261;
            if (index == 115) return 293;
            if (index == 116) return 349;
            if (index == 117) return 392;
            if (index == 118) return 293;
            if (index == 119) return 293;
        }
        if (index < 130) {
            if (index == 120) return 261;
            if (index == 121) return 293;
            if (index == 122) return 261;
            if (index == 123) return 220;
            if (index == 124) return 261;
            if (index == 125) return 293;
            if (index == 126) return 293;
            if (index == 127) return 261;
            if (index == 128) return 293;
            if (index == 129) return 349;
        }
        if (index < 140) {
            if (index == 130) return 349;
            if (index == 131) return 392;
            if (index == 132) return 440;
            if (index == 133) return 392;
            if (index == 134) return 440;
            if (index == 135) return 349;
            if (index == 136) return 293;
            if (index == 137) return 293;
            if (index == 138) return 293;
            if (index == 139) return 261;
        }
        if (index < 150) {
            if (index == 140) return 261;
            if (index == 141) return 293;
            if (index == 142) return 349;
            if (index == 143) return 392;
            if (index == 144) return 293;
            if (index == 145) return 293;
            if (index == 146) return 261;
            if (index == 147) return 293;
            if (index == 148) return 261;
            if (index == 149) return 220;
        }
        if (index < 160) {
            if (index == 150) return 261;
            if (index == 151) return 293;
            if (index == 152) return 293;
            if (index == 153) return 261;
            if (index == 154) return 261;
            if (index == 155) return 293;
            if (index == 156) return 349;
            if (index == 157) return 392;
            if (index == 158) return 440;
            if (index == 159) return 392;
        }
        if (index < 170) {
            if (index == 160) return 440;
            if (index == 161) return 349;
            if (index == 162) return 293;
            if (index == 163) return 349;
            if (index == 164) return 329;
            if (index == 165) return 293;
            if (index == 166) return 261;
            if (index == 167) return 261;
            if (index == 168) return 293;
            if (index == 169) return 261;
        }
        if (index < 180) {
            if (index == 170) return 220;
            if (index == 171) return 196;
            if (index == 172) return 220;
            if (index == 173) return 220;
            if (index == 174) return 261;
            if (index == 175) return 293;
            if (index == 176) return 392;
            if (index == 177) return 329;
            if (index == 178) return 349;
            if (index == 179) return 329;
        }
        if (index < 190) {
            if (index == 180) return 261;
            if (index == 181) return 293;
            if (index == 182) return 349;
            if (index == 183) return 329;
            if (index == 184) return 293;
            if (index == 185) return 261;
            if (index == 186) return 261;
            if (index == 187) return 293;
            if (index == 188) return 261;
            if (index == 189) return 220;
        }
        if (index < 200) {
            if (index == 190) return 196;
            if (index == 191) return 220;
            if (index == 192) return 220;
            if (index == 193) return 261;
            if (index == 194) return 293;
            if (index == 195) return 293;
            if (index == 196) return 0;
            if (index == 197) return 293;
            if (index == 198) return 349;
            if (index == 199) return 392;
        }
        if (index < 210) {
            if (index == 200) return 329;
            if (index == 201) return 0;
            if (index == 202) return 293;
            if (index == 203) return 349;
            if (index == 204) return 392;
            if (index == 205) return 392;
            if (index == 206) return 440;
            if (index == 207) return 440;
            if (index == 208) return 0;
            if (index == 209) return 440;
        }
        if (index < 220) {
            if (index == 210) return 523;
            if (index == 211) return 587;
            if (index == 212) return 392;
            if (index == 213) return 349;
            if (index == 214) return 440;
            if (index == 215) return 293;
            if (index == 216) return 349;
            if (index == 217) return 392;
            if (index == 218) return 392;
            if (index == 219) return 440;
        }
        if (index < 230) {
            if (index == 220) return 440;
            if (index == 221) return 440;
            if (index == 222) return 466;
            if (index == 223) return 440;
            if (index == 224) return 392;
            if (index == 225) return 349;
            if (index == 226) return 349;
            if (index == 227) return 293;
            if (index == 228) return 349;
            if (index == 229) return 392;
        }
        if (index < 240) {
            if (index == 230) return 392;
            if (index == 231) return 440;
            if (index == 232) return 440;
            if (index == 233) return 440;
            if (index == 234) return 523;
            if (index == 235) return 587;
            if (index == 236) return 392;
            if (index == 237) return 349;
            if (index == 238) return 440;
            if (index == 239) return 293;
        }
        if (index < 250) {
            if (index == 240) return 349;
            if (index == 241) return 466;
            if (index == 242) return 440;
            if (index == 243) return 392;
            if (index == 244) return 349;
            if (index == 245) return 392;
            if (index == 246) return 440;
            if (index == 247) return 329;
            if (index == 248) return 261;
            if (index == 249) return 293;
        }
        if (index < 260) {
            if (index == 250) return 587;
            if (index == 251) return 698;
            if (index == 252) return 783;
            if (index == 253) return 783;
            if (index == 254) return 880;
            if (index == 255) return 880;
            if (index == 256) return 0;
            if (index == 257) return 880;
            if (index == 258) return 1046;
            if (index == 259) return 1174;
        }
        if (index < 270) {
            if (index == 260) return 783;
            if (index == 261) return 698;
            if (index == 262) return 880;
            if (index == 263) return 587;
            if (index == 264) return 698;
            if (index == 265) return 783;
            if (index == 266) return 783;
            if (index == 267) return 880;
            if (index == 268) return 880;
            if (index == 269) return 880;
        }
        if (index < 280) {
            if (index == 270) return 932;
            if (index == 271) return 880;
            if (index == 272) return 783;
            if (index == 273) return 698;
            if (index == 274) return 698;
            if (index == 275) return 587;
            if (index == 276) return 698;
            if (index == 277) return 783;
            if (index == 278) return 783;
            if (index == 279) return 880;
        }
        if (index < 290) {
            if (index == 280) return 880;
            if (index == 281) return 880;
            if (index == 282) return 1046;
            if (index == 283) return 1174;
            if (index == 284) return 783;
            if (index == 285) return 698;
            if (index == 286) return 880;
            if (index == 287) return 587;
            if (index == 288) return 698;
            if (index == 289) return 932;
        }
        if (index < 300) {
            if (index == 290) return 880;
            if (index == 291) return 783;
            if (index == 292) return 698;
            if (index == 293) return 783;
            if (index == 294) return 698;
            if (index == 295) return 880;
            if (index == 296) return 1046;
            if (index == 297) return 1174;
        }
        return -1;
    }
    static unsigned char GetSakulaBeat(unsigned short index) {
        if (index < 10) {
            if (index == 0) return 2;
            if (index == 1) return 1;
            if (index == 2) return 3;
            if (index == 3) return 2;
            if (index == 4) return 2;
            if (index == 5) return 1;
            if (index == 6) return 3;
            if (index == 7) return 2;
            if (index == 8) return 2;
            if (index == 9) return 1;
        }
        if (index < 20) {
            if (index == 10) return 3;
            if (index == 11) return 2;
            if (index == 12) return 4;
            if (index == 13) return 4;
            if (index == 14) return 2;
            if (index == 15) return 1;
            if (index == 16) return 3;
            if (index == 17) return 2;
            if (index == 18) return 2;
            if (index == 19) return 1;
        }
        if (index < 30) {
            if (index == 20) return 3;
            if (index == 21) return 2;
            if (index == 22) return 4;
            if (index == 23) return 4;
            if (index == 24) return 4;
            if (index == 25) return 4;
            if (index == 26) return 2;
            if (index == 27) return 2;
            if (index == 28) return 1;
            if (index == 29) return 1;
        }
        if (index < 40) {
            if (index == 30) return 1;
            if (index == 31) return 1;
            if (index == 32) return 2;
            if (index == 33) return 2;
            if (index == 34) return 1;
            if (index == 35) return 1;
            if (index == 36) return 1;
            if (index == 37) return 1;
            if (index == 38) return 2;
            if (index == 39) return 2;
        }
        if (index < 50) {
            if (index == 40) return 1;
            if (index == 41) return 1;
            if (index == 42) return 1;
            if (index == 43) return 1;
            if (index == 44) return 2;
            if (index == 45) return 1;
            if (index == 46) return 1;
            if (index == 47) return 1;
            if (index == 48) return 2;
            if (index == 49) return 1;
        }
        if (index < 60) {
            if (index == 50) return 2;
            if (index == 51) return 2;
            if (index == 52) return 1;
            if (index == 53) return 1;
            if (index == 54) return 1;
            if (index == 55) return 1;
            if (index == 56) return 2;
            if (index == 57) return 2;
            if (index == 58) return 1;
            if (index == 59) return 1;
        }
        if (index < 70) {
            if (index == 60) return 1;
            if (index == 61) return 1;
            if (index == 62) return 2;
            if (index == 63) return 2;
            if (index == 64) return 2;
            if (index == 65) return 2;
            if (index == 66) return 1;
            if (index == 67) return 1;
            if (index == 68) return 1;
            if (index == 69) return 1;
        }
        if (index < 80) {
            if (index == 70) return 2;
            if (index == 71) return 2;
            if (index == 72) return 2;
            if (index == 73) return 2;
            if (index == 74) return 1;
            if (index == 75) return 1;
            if (index == 76) return 1;
            if (index == 77) return 1;
            if (index == 78) return 2;
            if (index == 79) return 2;
        }
        if (index < 90) {
            if (index == 80) return 1;
            if (index == 81) return 1;
            if (index == 82) return 1;
            if (index == 83) return 1;
            if (index == 84) return 2;
            if (index == 85) return 2;
            if (index == 86) return 1;
            if (index == 87) return 1;
            if (index == 88) return 1;
            if (index == 89) return 1;
        }
        if (index < 100) {
            if (index == 90) return 2;
            if (index == 91) return 1;
            if (index == 92) return 1;
            if (index == 93) return 1;
            if (index == 94) return 2;
            if (index == 95) return 1;
            if (index == 96) return 2;
            if (index == 97) return 1;
            if (index == 98) return 1;
            if (index == 99) return 1;
        }
        if (index < 110) {
            if (index == 100) return 1;
            if (index == 101) return 1;
            if (index == 102) return 1;
            if (index == 103) return 2;
            if (index == 104) return 2;
            if (index == 105) return 2;
            if (index == 106) return 2;
            if (index == 107) return 3;
            if (index == 108) return 2;
            if (index == 109) return 3;
        }
        if (index < 120) {
            if (index == 110) return 2;
            if (index == 111) return 4;
            if (index == 112) return 3;
            if (index == 113) return 1;
            if (index == 114) return 2;
            if (index == 115) return 2;
            if (index == 116) return 2;
            if (index == 117) return 2;
            if (index == 118) return 4;
            if (index == 119) return 3;
        }
        if (index < 130) {
            if (index == 120) return 1;
            if (index == 121) return 2;
            if (index == 122) return 2;
            if (index == 123) return 2;
            if (index == 124) return 2;
            if (index == 125) return 4;
            if (index == 126) return 3;
            if (index == 127) return 1;
            if (index == 128) return 2;
            if (index == 129) return 2;
        }
        if (index < 140) {
            if (index == 130) return 2;
            if (index == 131) return 2;
            if (index == 132) return 4;
            if (index == 133) return 3;
            if (index == 134) return 1;
            if (index == 135) return 4;
            if (index == 136) return 4;
            if (index == 137) return 4;
            if (index == 138) return 3;
            if (index == 139) return 1;
        }
        if (index < 150) {
            if (index == 140) return 2;
            if (index == 141) return 2;
            if (index == 142) return 2;
            if (index == 143) return 2;
            if (index == 144) return 4;
            if (index == 145) return 3;
            if (index == 146) return 1;
            if (index == 147) return 2;
            if (index == 148) return 2;
            if (index == 149) return 2;
        }
        if (index < 160) {
            if (index == 150) return 2;
            if (index == 151) return 4;
            if (index == 152) return 3;
            if (index == 153) return 1;
            if (index == 154) return 2;
            if (index == 155) return 2;
            if (index == 156) return 2;
            if (index == 157) return 2;
            if (index == 158) return 4;
            if (index == 159) return 3;
        }
        if (index < 170) {
            if (index == 160) return 1;
            if (index == 161) return 4;
            if (index == 162) return 4;
            if (index == 163) return 4;
            if (index == 164) return 4;
            if (index == 165) return 4;
            if (index == 166) return 4;
            if (index == 167) return 2;
            if (index == 168) return 1;
            if (index == 169) return 1;
        }
        if (index < 180) {
            if (index == 170) return 2;
            if (index == 171) return 2;
            if (index == 172) return 8;
            if (index == 173) return 2;
            if (index == 174) return 2;
            if (index == 175) return 4;
            if (index == 176) return 4;
            if (index == 177) return 4;
            if (index == 178) return 4;
            if (index == 179) return 2;
        }
        if (index < 190) {
            if (index == 180) return 2;
            if (index == 181) return 8;
            if (index == 182) return 4;
            if (index == 183) return 4;
            if (index == 184) return 4;
            if (index == 185) return 4;
            if (index == 186) return 2;
            if (index == 187) return 1;
            if (index == 188) return 1;
            if (index == 189) return 2;
        }
        if (index < 200) {
            if (index == 190) return 2;
            if (index == 191) return 4;
            if (index == 192) return 2;
            if (index == 193) return 2;
            if (index == 194) return 2;
            if (index == 195) return 2;
            if (index == 196) return 2;
            if (index == 197) return 2;
            if (index == 198) return 4;
            if (index == 199) return 4;
        }
        if (index < 210) {
            if (index == 200) return 8;
            if (index == 201) return 4;
            if (index == 202) return 2;
            if (index == 203) return 2;
            if (index == 204) return 3;
            if (index == 205) return 3;
            if (index == 206) return 2;
            if (index == 207) return 4;
            if (index == 208) return 2;
            if (index == 209) return 2;
        }
        if (index < 220) {
            if (index == 210) return 2;
            if (index == 211) return 2;
            if (index == 212) return 2;
            if (index == 213) return 2;
            if (index == 214) return 4;
            if (index == 215) return 2;
            if (index == 216) return 2;
            if (index == 217) return 3;
            if (index == 218) return 3;
            if (index == 219) return 2;
        }
        if (index < 230) {
            if (index == 220) return 6;
            if (index == 221) return 2;
            if (index == 222) return 2;
            if (index == 223) return 2;
            if (index == 224) return 2;
            if (index == 225) return 2;
            if (index == 226) return 4;
            if (index == 227) return 2;
            if (index == 228) return 2;
            if (index == 229) return 3;
        }
        if (index < 240) {
            if (index == 230) return 3;
            if (index == 231) return 2;
            if (index == 232) return 6;
            if (index == 233) return 2;
            if (index == 234) return 2;
            if (index == 235) return 2;
            if (index == 236) return 2;
            if (index == 237) return 2;
            if (index == 238) return 4;
            if (index == 239) return 2;
        }
        if (index < 250) {
            if (index == 240) return 2;
            if (index == 241) return 4;
            if (index == 242) return 4;
            if (index == 243) return 4;
            if (index == 244) return 4;
            if (index == 245) return 2;
            if (index == 246) return 2;
            if (index == 247) return 2;
            if (index == 248) return 2;
            if (index == 249) return 4;
        }
        if (index < 260) {
            if (index == 250) return 2;
            if (index == 251) return 2;
            if (index == 252) return 3;
            if (index == 253) return 3;
            if (index == 254) return 2;
            if (index == 255) return 4;
            if (index == 256) return 2;
            if (index == 257) return 2;
            if (index == 258) return 2;
            if (index == 259) return 2;
        }
        if (index < 270) {
            if (index == 260) return 2;
            if (index == 261) return 2;
            if (index == 262) return 4;
            if (index == 263) return 2;
            if (index == 264) return 2;
            if (index == 265) return 3;
            if (index == 266) return 3;
            if (index == 267) return 2;
            if (index == 268) return 6;
            if (index == 269) return 2;
        }
        if (index < 280) {
            if (index == 270) return 2;
            if (index == 271) return 2;
            if (index == 272) return 2;
            if (index == 273) return 2;
            if (index == 274) return 4;
            if (index == 275) return 2;
            if (index == 276) return 2;
            if (index == 277) return 3;
            if (index == 278) return 3;
            if (index == 279) return 2;
        }
        if (index < 290) {
            if (index == 280) return 6;
            if (index == 281) return 2;
            if (index == 282) return 2;
            if (index == 283) return 2;
            if (index == 284) return 2;
            if (index == 285) return 2;
            if (index == 286) return 4;
            if (index == 287) return 2;
            if (index == 288) return 2;
            if (index == 289) return 4;
        }
        if (index < 300) {
            if (index == 290) return 4;
            if (index == 291) return 4;
            if (index == 292) return 4;
            if (index == 293) return 2;
            if (index == 294) return 2;
            if (index == 295) return 2;
            if (index == 296) return 2;
            if (index == 297) return 8;
        }
        return -1;
    }
    static unsigned short GetStayMelody(unsigned short index) {
        if (index < 50) {
            if (index < 10) {
                if (index == 0) return 0;
                if (index == 1) return 261;
                if (index == 2) return 277;
                if (index == 3) return 415;
                if (index == 4) return 277;
                if (index == 5) return 0;
                if (index == 6) return 261;
                if (index == 7) return 277;
                if (index == 8) return 207;
                if (index == 9) return 0;
            }
            if (index < 20) {
                if (index == 10) return 261;
                if (index == 11) return 277;
                if (index == 12) return 415;
                if (index == 13) return 277;
                if (index == 14) return 0;
                if (index == 15) return 261;
                if (index == 16) return 277;
                if (index == 17) return 207;
                if (index == 18) return 233;
                if (index == 19) return 0;
            }
            if (index < 30) {
                if (index == 20) return 261;
                if (index == 21) return 277;
                if (index == 22) return 415;
                if (index == 23) return 277;
                if (index == 24) return 0;
                if (index == 25) return 261;
                if (index == 26) return 277;
                if (index == 27) return 207;
                if (index == 28) return 0;
                if (index == 29) return 261;
            }
            if (index < 40) {
                if (index == 30) return 277;
                if (index == 31) return 415;
                if (index == 32) return 277;
                if (index == 33) return 0;
                if (index == 34) return 261;
                if (index == 35) return 277;
                if (index == 36) return 261;
                if (index == 37) return 207;
                if (index == 38) return 233;
                if (index == 39) return 261;
            }
            if (index < 50) {
                if (index == 40) return 277;
                if (index == 41) return 261;
                if (index == 42) return 415;
                if (index == 43) return 261;
                if (index == 44) return 261;
                if (index == 45) return 261;
                if (index == 46) return 261;
                if (index == 47) return 261;
                if (index == 48) return 261;
                if (index == 49) return 261;
            }
        }
        if (index < 100) {
            if (index < 60) {
                if (index == 50) return 277;
                if (index == 51) return 277;
                if (index == 52) return 277;
                if (index == 53) return 261;
                if (index == 54) return 277;
                if (index == 55) return 261;
                if (index == 56) return 415;
                if (index == 57) return 261;
                if (index == 58) return 261;
                if (index == 59) return 261;
            }
            if (index < 70) {
                if (index == 60) return 261;
                if (index == 61) return 261;
                if (index == 62) return 261;
                if (index == 63) return 261;
                if (index == 64) return 277;
                if (index == 65) return 277;
                if (index == 66) return 277;
                if (index == 67) return 261;
                if (index == 68) return 277;
                if (index == 69) return 261;
            }
            if (index < 80) {
                if (index == 70) return 415;
                if (index == 71) return 261;
                if (index == 72) return 261;
                if (index == 73) return 261;
                if (index == 74) return 261;
                if (index == 75) return 261;
                if (index == 76) return 261;
                if (index == 77) return 261;
                if (index == 78) return 277;
                if (index == 79) return 277;
            }
            if (index < 90) {
                if (index == 80) return 277;
                if (index == 81) return 261;
                if (index == 82) return 277;
                if (index == 83) return 261;
                if (index == 84) return 415;
                if (index == 85) return 311;
                if (index == 86) return 349;
                if (index == 87) return 415;
                if (index == 88) return 523;
                if (index == 89) return 415;
            }
        }
        if (index < 150) {
            if (index < 100) {
                if (index == 90) return 466;
                if (index == 91) return 0;
                if (index == 92) return 233;
                if (index == 93) return 349;
                if (index == 94) return 311;
                if (index == 95) return 311;
                if (index == 96) return 311;
                if (index == 97) return 277;
                if (index == 98) return 311;
                if (index == 99) return 311;
            }
            if (index < 110) {
                if (index == 100) return 233;
                if (index == 101) return 233;
                if (index == 102) return 349;
                if (index == 103) return 277;
                if (index == 104) return 311;
                if (index == 105) return 277;
                if (index == 106) return 311;
                if (index == 107) return 311;
                if (index == 108) return 277;
                if (index == 109) return 311;
            }
            if (index < 120) {
                if (index == 110) return 311;
                if (index == 111) return 233;
                if (index == 112) return 233;
                if (index == 113) return 349;
                if (index == 114) return 311;
                if (index == 115) return 277;
                if (index == 116) return 311;
                if (index == 117) return 311;
                if (index == 118) return 277;
                if (index == 119) return 311;
            }
            if (index < 130) {
                if (index == 120) return 311;
                if (index == 121) return 415;
                if (index == 122) return 349;
                if (index == 123) return 415;
                if (index == 124) return 349;
                if (index == 125) return 311;
                if (index == 126) return 311;
                if (index == 127) return 311;
                if (index == 128) return 349;
                if (index == 129) return 311;
            }
            if (index < 140) {
                if (index == 130) return 277;
                if (index == 131) return 277;
                if (index == 132) return 277;
                if (index == 133) return 0;
                if (index == 134) return 233;
                if (index == 135) return 349;
                if (index == 136) return 415;
                if (index == 137) return 369;
                if (index == 138) return 349;
                if (index == 139) return 311;
            }
            if (index < 150) {
                if (index == 140) return 277;
                if (index == 141) return 0;
                if (index == 142) return 233;
                if (index == 143) return 349;
                if (index == 144) return 415;
                if (index == 145) return 369;
                if (index == 146) return 349;
                if (index == 147) return 311;
                if (index == 148) return 277;
                if (index == 149) return 0;
            }
        }
        if (index < 200) {
            if (index < 160) {
                if (index == 150) return 233;
                if (index == 151) return 349;
                if (index == 152) return 415;
                if (index == 153) return 369;
                if (index == 154) return 349;
                if (index == 155) return 311;
                if (index == 156) return 415;
                if (index == 157) return 349;
                if (index == 158) return 415;
                if (index == 159) return 349;
            }
            if (index < 170) {
                if (index == 160) return 311;
                if (index == 161) return 311;
                if (index == 162) return 311;
                if (index == 163) return 349;
                if (index == 164) return 311;
                if (index == 165) return 277;
                if (index == 166) return 277;
                if (index == 167) return 261;
                if (index == 168) return 277;
                if (index == 169) return 261;
            }
            if (index < 180) {
                if (index == 170) return 415;
                if (index == 171) return 261;
                if (index == 172) return 261;
                if (index == 173) return 261;
                if (index == 174) return 261;
                if (index == 175) return 261;
                if (index == 176) return 261;
                if (index == 177) return 261;
                if (index == 178) return 277;
                if (index == 179) return 277;
            }
            if (index < 190) {
                if (index == 180) return 277;
                if (index == 181) return 261;
                if (index == 182) return 277;
                if (index == 183) return 261;
                if (index == 184) return 415;
                if (index == 185) return 261;
                if (index == 186) return 261;
                if (index == 187) return 261;
                if (index == 188) return 261;
                if (index == 189) return 261;
            }
            if (index < 200) {
                if (index == 190) return 261;
                if (index == 191) return 261;
                if (index == 192) return 277;
                if (index == 193) return 277;
                if (index == 194) return 277;
                if (index == 195) return 261;
                if (index == 196) return 277;
                if (index == 197) return 261;
                if (index == 198) return 415;
                if (index == 199) return 261;
            }
        }
        if (index < 250) {
            if (index < 210) {
                if (index == 200) return 261;
                if (index == 201) return 261;
                if (index == 202) return 261;
                if (index == 203) return 261;
                if (index == 204) return 261;
                if (index == 205) return 261;
                if (index == 206) return 277;
                if (index == 207) return 277;
                if (index == 208) return 277;
                if (index == 209) return 261;
            }
            if (index < 220) {
                if (index == 210) return 277;
                if (index == 211) return 261;
                if (index == 212) return 415;
                if (index == 213) return 311;
                if (index == 214) return 349;
                if (index == 215) return 415;
                if (index == 216) return 523;
                if (index == 217) return 415;
                if (index == 218) return 466;
                if (index == 219) return 261;
            }
            if (index < 230) {
                if (index == 220) return 277;
                if (index == 221) return 261;
                if (index == 222) return 415;
                if (index == 223) return 261;
                if (index == 224) return 261;
                if (index == 225) return 261;
                if (index == 226) return 261;
                if (index == 227) return 261;
                if (index == 228) return 261;
                if (index == 229) return 261;
            }
            if (index < 240) {
                if (index == 230) return 277;
                if (index == 231) return 277;
                if (index == 232) return 277;
                if (index == 233) return 261;
                if (index == 234) return 277;
                if (index == 235) return 261;
                if (index == 236) return 415;
                if (index == 237) return 261;
                if (index == 238) return 261;
                if (index == 239) return 261;
            }
            if (index < 250) {
                if (index == 240) return 261;
                if (index == 241) return 261;
                if (index == 242) return 261;
                if (index == 243) return 261;
                if (index == 244) return 277;
                if (index == 245) return 277;
                if (index == 246) return 277;
                if (index == 247) return 261;
                if (index == 248) return 277;
                if (index == 249) return 261;
            }
        }
        if (index < 300) {
            if (index < 260) {
                if (index == 250) return 415;
                if (index == 251) return 261;
                if (index == 252) return 261;
                if (index == 253) return 261;
                if (index == 254) return 261;
                if (index == 255) return 261;
                if (index == 256) return 261;
                if (index == 257) return 261;
                if (index == 258) return 277;
                if (index == 259) return 277;
            }
            if (index < 270) {
                if (index == 260) return 277;
                if (index == 261) return 261;
                if (index == 262) return 277;
                if (index == 263) return 261;
                if (index == 264) return 415;
                if (index == 265) return 311;
                if (index == 266) return 349;
                if (index == 267) return 415;
                if (index == 268) return 523;
                if (index == 269) return 415;
            }
            if (index < 280) {
                if (index == 270) return 466;
            }
        }
        
        return -1;
    }
    static unsigned char GetStayBeat(unsigned short index) {
        if (index < 10) {
            if (index == 0) return 1;
            if (index == 1) return 1;
            if (index == 2) return 1;
            if (index == 3) return 3;
            if (index == 4) return 2;
            if (index == 5) return 2;
            if (index == 6) return 1;
            if (index == 7) return 3;
            if (index == 8) return 2;
            if (index == 9) return 1;
        }
        if (index < 20) {
            if (index == 10) return 1;
            if (index == 11) return 1;
            if (index == 12) return 3;
            if (index == 13) return 2;
            if (index == 14) return 2;
            if (index == 15) return 1;
            if (index == 16) return 3;
            if (index == 17) return 1;
            if (index == 18) return 1;
            if (index == 19) return 1;
        }
        if (index < 30) {
            if (index == 20) return 1;
            if (index == 21) return 1;
            if (index == 22) return 3;
            if (index == 23) return 2;
            if (index == 24) return 2;
            if (index == 25) return 1;
            if (index == 26) return 3;
            if (index == 27) return 2;
            if (index == 28) return 1;
            if (index == 29) return 1;
        }
        if (index < 40) {
            if (index == 30) return 1;
            if (index == 31) return 3;
            if (index == 32) return 2;
            if (index == 33) return 2;
            if (index == 34) return 1;
            if (index == 35) return 1;
            if (index == 36) return 1;
            if (index == 37) return 1;
            if (index == 38) return 2;
            if (index == 39) return 1;
        }
        if (index < 50) {
            if (index == 40) return 1;
            if (index == 41) return 1;
            if (index == 42) return 3;
            if (index == 43) return 1;
            if (index == 44) return 1;
            if (index == 45) return 1;
            if (index == 46) return 1;
            if (index == 47) return 1;
            if (index == 48) return 1;
            if (index == 49) return 1;
        }
        if (index < 60) {
            if (index == 50) return 1;
            if (index == 51) return 1;
            if (index == 52) return 1;
            if (index == 53) return 1;
            if (index == 54) return 1;
            if (index == 55) return 1;
            if (index == 56) return 3;
            if (index == 57) return 1;
            if (index == 58) return 1;
            if (index == 59) return 1;
        }
        if (index < 70) {
            if (index == 60) return 1;
            if (index == 61) return 1;
            if (index == 62) return 1;
            if (index == 63) return 1;
            if (index == 64) return 1;
            if (index == 65) return 1;
            if (index == 66) return 1;
            if (index == 67) return 1;
            if (index == 68) return 1;
            if (index == 69) return 1;
        }
        if (index < 80) {
            if (index == 70) return 3;
            if (index == 71) return 1;
            if (index == 72) return 1;
            if (index == 73) return 1;
            if (index == 74) return 1;
            if (index == 75) return 1;
            if (index == 76) return 1;
            if (index == 77) return 1;
            if (index == 78) return 1;
            if (index == 79) return 1;
        }
        if (index < 90) {
            if (index == 80) return 1;
            if (index == 81) return 1;
            if (index == 82) return 1;
            if (index == 83) return 1;
            if (index == 84) return 3;
            if (index == 85) return 1;
            if (index == 86) return 1;
            if (index == 87) return 1;
            if (index == 88) return 3;
            if (index == 89) return 3;
        }
        if (index < 100) {
            if (index == 90) return 1;
            if (index == 91) return 1;
            if (index == 92) return 1;
            if (index == 93) return 2;
            if (index == 94) return 3;
            if (index == 95) return 2;
            if (index == 96) return 2;
            if (index == 97) return 1;
            if (index == 98) return 2;
            if (index == 99) return 2;
        }
        if (index < 110) {
            if (index == 100) return 1;
            if (index == 101) return 1;
            if (index == 102) return 1;
            if (index == 103) return 1;
            if (index == 104) return 2;
            if (index == 105) return 1;
            if (index == 106) return 2;
            if (index == 107) return 2;
            if (index == 108) return 1;
            if (index == 109) return 2;
        }
        if (index < 120) {
            if (index == 110) return 2;
            if (index == 111) return 1;
            if (index == 112) return 1;
            if (index == 113) return 2;
            if (index == 114) return 2;
            if (index == 115) return 1;
            if (index == 116) return 2;
            if (index == 117) return 2;
            if (index == 118) return 1;
            if (index == 119) return 2;
        }
        if (index < 130) {
            if (index == 120) return 2;
            if (index == 121) return 2;
            if (index == 122) return 2;
            if (index == 123) return 2;
            if (index == 124) return 2;
            if (index == 125) return 1;
            if (index == 126) return 1;
            if (index == 127) return 1;
            if (index == 128) return 1;
            if (index == 129) return 1;
        }
        if (index < 140) {
            if (index == 130) return 1;
            if (index == 131) return 2;
            if (index == 132) return 4;
            if (index == 133) return 1;
            if (index == 134) return 1;
            if (index == 135) return 2;
            if (index == 136) return 3;
            if (index == 137) return 1;
            if (index == 138) return 3;
            if (index == 139) return 1;
        }
        if (index < 150) {
            if (index == 140) return 4;
            if (index == 141) return 1;
            if (index == 142) return 1;
            if (index == 143) return 2;
            if (index == 144) return 3;
            if (index == 145) return 1;
            if (index == 146) return 3;
            if (index == 147) return 1;
            if (index == 148) return 4;
            if (index == 149) return 1;
        }
        if (index < 160) {
            if (index == 150) return 1;
            if (index == 151) return 2;
            if (index == 152) return 3;
            if (index == 153) return 1;
            if (index == 154) return 3;
            if (index == 155) return 1;
            if (index == 156) return 2;
            if (index == 157) return 2;
            if (index == 158) return 2;
            if (index == 159) return 2;
        }
        if (index < 170) {
            if (index == 160) return 1;
            if (index == 161) return 1;
            if (index == 162) return 1;
            if (index == 163) return 1;
            if (index == 164) return 1;
            if (index == 165) return 1;
            if (index == 166) return 2;
            if (index == 167) return 1;
            if (index == 168) return 1;
            if (index == 169) return 1;
        }
        if (index < 180) {
            if (index == 170) return 3;
            if (index == 171) return 1;
            if (index == 172) return 1;
            if (index == 173) return 1;
            if (index == 174) return 1;
            if (index == 175) return 1;
            if (index == 176) return 1;
            if (index == 177) return 1;
            if (index == 178) return 1;
            if (index == 179) return 1;
        }
        if (index < 190) {
            if (index == 180) return 1;
            if (index == 181) return 1;
            if (index == 182) return 1;
            if (index == 183) return 1;
            if (index == 184) return 3;
            if (index == 185) return 1;
            if (index == 186) return 1;
            if (index == 187) return 1;
            if (index == 188) return 1;
            if (index == 189) return 1;
        }
        if (index < 200) {
            if (index == 190) return 1;
            if (index == 191) return 1;
            if (index == 192) return 1;
            if (index == 193) return 1;
            if (index == 194) return 1;
            if (index == 195) return 1;
            if (index == 196) return 1;
            if (index == 197) return 1;
            if (index == 198) return 3;
            if (index == 199) return 1;
        }
        if (index < 210) {
            if (index == 200) return 1;
            if (index == 201) return 1;
            if (index == 202) return 1;
            if (index == 203) return 1;
            if (index == 204) return 1;
            if (index == 205) return 1;
            if (index == 206) return 1;
            if (index == 207) return 1;
            if (index == 208) return 1;
            if (index == 209) return 1;
        }
        if (index < 220) {
            if (index == 210) return 1;
            if (index == 211) return 1;
            if (index == 212) return 3;
            if (index == 213) return 1;
            if (index == 214) return 1;
            if (index == 215) return 1;
            if (index == 216) return 3;
            if (index == 217) return 3;
            if (index == 218) return 1;
            if (index == 219) return 1;
        }
        if (index < 230) {
            if (index == 220) return 1;
            if (index == 221) return 1;
            if (index == 222) return 3;
            if (index == 223) return 1;
            if (index == 224) return 1;
            if (index == 225) return 1;
            if (index == 226) return 1;
            if (index == 227) return 1;
            if (index == 228) return 1;
            if (index == 229) return 1;
        }
        if (index < 240) {
            if (index == 230) return 1;
            if (index == 231) return 1;
            if (index == 232) return 1;
            if (index == 233) return 1;
            if (index == 234) return 1;
            if (index == 235) return 1;
            if (index == 236) return 3;
            if (index == 237) return 1;
            if (index == 238) return 1;
            if (index == 239) return 1;
        }
        if (index < 250) {
            if (index == 240) return 1;
            if (index == 241) return 1;
            if (index == 242) return 1;
            if (index == 243) return 1;
            if (index == 244) return 1;
            if (index == 245) return 1;
            if (index == 246) return 1;
            if (index == 247) return 1;
            if (index == 248) return 1;
            if (index == 249) return 1;
        }
        if (index < 260) {
            if (index == 250) return 3;
            if (index == 251) return 1;
            if (index == 252) return 1;
            if (index == 253) return 1;
            if (index == 254) return 1;
            if (index == 255) return 1;
            if (index == 256) return 1;
            if (index == 257) return 1;
            if (index == 258) return 1;
            if (index == 259) return 1;
        }
        if (index < 270) {
            if (index == 260) return 1;
            if (index == 261) return 1;
            if (index == 262) return 1;
            if (index == 263) return 1;
            if (index == 264) return 3;
            if (index == 265) return 1;
            if (index == 266) return 1;
            if (index == 267) return 1;
            if (index == 268) return 3;
            if (index == 269) return 3;
        }
        if (index < 280) {
            if (index == 270) return 1;
        }
        return -1;
    }
    static unsigned short GetSkyCityMelody(unsigned short index) {
        if (index < 10) {
            if (index == 0) return 440;
            if (index == 1) return 493;
            if (index == 2) return 523;
            if (index == 3) return 493;
            if (index == 4) return 523;
            if (index == 5) return 659;
            if (index == 6) return 493;
            if (index == 7) return 329;
            if (index == 8) return 440;
            if (index == 9) return 392;
        }
        if (index < 20) {
            if (index == 10) return 440;
            if (index == 11) return 523;
            if (index == 12) return 392;
            if (index == 13) return 329;
            if (index == 14) return 349;
            if (index == 15) return 329;
            if (index == 16) return 349;
            if (index == 17) return 523;
            if (index == 18) return 329;
            if (index == 19) return 523;
        }
        if (index < 30) {
            if (index == 20) return 493;
            if (index == 21) return 369;
            if (index == 22) return 369;
            if (index == 23) return 493;
            if (index == 24) return 493;
            if (index == 25) return 440;
            if (index == 26) return 493;
            if (index == 27) return 523;
            if (index == 28) return 493;
            if (index == 29) return 523;
        }
        if (index < 40) {
            if (index == 30) return 659;
            if (index == 31) return 493;
            if (index == 32) return 329;
            if (index == 33) return 440;
            if (index == 34) return 392;
            if (index == 35) return 440;
            if (index == 36) return 523;
            if (index == 37) return 392;
            if (index == 38) return 329;
            if (index == 39) return 349;
        }
        if (index < 50) {
            if (index == 40) return 523;
            if (index == 41) return 493;
            if (index == 42) return 523;
            if (index == 43) return 587;
            if (index == 44) return 659;
            if (index == 45) return 523;
            if (index == 46) return 523;
            if (index == 47) return 493;
            if (index == 48) return 440;
            if (index == 49) return 493;
        }
        if (index < 60) {
            if (index == 50) return 415;
            if (index == 51) return 440;
        }
        return -1;
    }
    static unsigned char GetSkyCityBeat(unsigned short index) {
        if (index < 10) {
            if (index == 0) return 2;
            if (index == 1) return 2;
            if (index == 2) return 6;
            if (index == 3) return 2;
            if (index == 4) return 4;
            if (index == 5) return 4;
            if (index == 6) return 12;
            if (index == 7) return 4;
            if (index == 8) return 6;
            if (index == 9) return 2;
        }
        if (index < 20) {
            if (index == 10) return 4;
            if (index == 11) return 4;
            if (index == 12) return 12;
            if (index == 13) return 4;
            if (index == 14) return 6;
            if (index == 15) return 2;
            if (index == 16) return 4;
            if (index == 17) return 4;
            if (index == 18) return 12;
            if (index == 19) return 4;
        }
        if (index < 30) {
            if (index == 20) return 6;
            if (index == 21) return 2;
            if (index == 22) return 4;
            if (index == 23) return 4;
            if (index == 24) return 12;
            if (index == 25) return 2;
            if (index == 26) return 2;
            if (index == 27) return 6;
            if (index == 28) return 2;
            if (index == 29) return 4;
        }
        if (index < 40) {
            if (index == 30) return 4;
            if (index == 31) return 12;
            if (index == 32) return 4;
            if (index == 33) return 6;
            if (index == 34) return 2;
            if (index == 35) return 4;
            if (index == 36) return 4;
            if (index == 37) return 12;
            if (index == 38) return 4;
            if (index == 39) return 4;
        }
        if (index < 50) {
            if (index == 40) return 2;
            if (index == 41) return 6;
            if (index == 42) return 4;
            if (index == 43) return 4;
            if (index == 44) return 2;
            if (index == 45) return 10;
            if (index == 46) return 2;
            if (index == 47) return 2;
            if (index == 48) return 4;
            if (index == 49) return 4;
        }
        if (index < 60) {
            if (index == 50) return 4;
            if (index == 51) return 12;
        }
        return -1;
    }
    static unsigned short GetCanonMelody(unsigned short index) {
        if (index < 10) {
            if (index == 0) return 783;
            if (index == 1) return 659;
            if (index == 2) return 698;
            if (index == 3) return 783;
            if (index == 4) return 659;
            if (index == 5) return 698;
            if (index == 6) return 783;
            if (index == 7) return 493;
            if (index == 8) return 440;
            if (index == 9) return 493;
        }
        if (index < 20) {
            if (index == 10) return 523;
            if (index == 11) return 587;
            if (index == 12) return 659;
            if (index == 13) return 698;
            if (index == 14) return 659;
            if (index == 15) return 523;
            if (index == 16) return 587;
            if (index == 17) return 659;
            if (index == 18) return 329;
            if (index == 19) return 349;
        }
        if (index < 30) {
            if (index == 20) return 392;
            if (index == 21) return 440;
            if (index == 22) return 392;
            if (index == 23) return 349;
            if (index == 24) return 392;
            if (index == 25) return 523;
            if (index == 26) return 493;
            if (index == 27) return 523;
            if (index == 28) return 440;
            if (index == 29) return 523;
        }
        if (index < 40) {
            if (index == 30) return 493;
            if (index == 31) return 440;
            if (index == 32) return 392;
            if (index == 33) return 349;
            if (index == 34) return 392;
            if (index == 35) return 349;
            if (index == 36) return 329;
            if (index == 37) return 349;
            if (index == 38) return 392;
            if (index == 39) return 523;
        }
        if (index < 50) {
            if (index == 40) return 493;
            if (index == 41) return 523;
            if (index == 42) return 440;
            if (index == 43) return 523;
            if (index == 44) return 493;
            if (index == 45) return 523;
            if (index == 46) return 493;
            if (index == 47) return 523;
            if (index == 48) return 493;
            if (index == 49) return 440;
        }
        if (index < 60) {
            if (index == 50) return 493;
            if (index == 51) return 523;
            if (index == 52) return 587;
            if (index == 53) return 659;
            if (index == 54) return 698;
            if (index == 55) return 783;
            if (index == 56) return 783;
            if (index == 57) return 659;
            if (index == 58) return 698;
            if (index == 59) return 783;
        }
        if (index < 70) {
            if (index == 60) return 659;
            if (index == 61) return 698;
            if (index == 62) return 783;
            if (index == 63) return 493;
            if (index == 64) return 440;
            if (index == 65) return 493;
            if (index == 66) return 523;
            if (index == 67) return 587;
            if (index == 68) return 659;
            if (index == 69) return 698;
        }
        if (index < 80) {
            if (index == 70) return 659;
            if (index == 71) return 523;
            if (index == 72) return 587;
            if (index == 73) return 659;
            if (index == 74) return 329;
            if (index == 75) return 349;
            if (index == 76) return 392;
            if (index == 77) return 440;
            if (index == 78) return 392;
            if (index == 79) return 349;
        }
        if (index < 90) {
            if (index == 80) return 392;
            if (index == 81) return 523;
            if (index == 82) return 493;
            if (index == 83) return 523;
            if (index == 84) return 440;
            if (index == 85) return 523;
            if (index == 86) return 493;
            if (index == 87) return 440;
            if (index == 88) return 392;
            if (index == 89) return 349;
        }
        if (index < 100) {
            if (index == 90) return 392;
            if (index == 91) return 349;
            if (index == 92) return 329;
            if (index == 93) return 349;
            if (index == 94) return 392;
            if (index == 95) return 523;
            if (index == 96) return 493;
            if (index == 97) return 523;
            if (index == 98) return 440;
            if (index == 99) return 523;
        }
        if (index < 110) {
            if (index == 100) return 493;
            if (index == 101) return 523;
            if (index == 102) return 493;
            if (index == 103) return 523;
            if (index == 104) return 493;
            if (index == 105) return 440;
            if (index == 106) return 493;
            if (index == 107) return 523;
            if (index == 108) return 587;
            if (index == 109) return 659;
        }
        if (index < 120) {
            if (index == 110) return 698;
            if (index == 111) return 783;
            if (index == 112) return 659;
            if (index == 113) return 523;
            if (index == 114) return 587;
            if (index == 115) return 659;
            if (index == 116) return 587;
            if (index == 117) return 523;
            if (index == 118) return 587;
            if (index == 119) return 493;
        }
        if (index < 130) {
            if (index == 120) return 523;
            if (index == 121) return 587;
            if (index == 122) return 659;
            if (index == 123) return 587;
            if (index == 124) return 587;
            if (index == 125) return 493;
            if (index == 126) return 523;
            if (index == 127) return 440;
            if (index == 128) return 493;
            if (index == 129) return 523;
        }
        if (index < 140) {
            if (index == 130) return 261;
            if (index == 131) return 293;
            if (index == 132) return 329;
            if (index == 133) return 349;
            if (index == 134) return 329;
            if (index == 135) return 293;
            if (index == 136) return 329;
            if (index == 137) return 523;
            if (index == 138) return 493;
            if (index == 139) return 523;
        }
        if (index < 150) {
            if (index == 140) return 440;
            if (index == 141) return 523;
            if (index == 142) return 493;
            if (index == 143) return 440;
            if (index == 144) return 392;
            if (index == 145) return 349;
            if (index == 146) return 392;
            if (index == 147) return 349;
            if (index == 148) return 329;
            if (index == 149) return 349;
        }
        if (index < 160) {
            if (index == 150) return 392;
            if (index == 151) return 523;
            if (index == 152) return 493;
            if (index == 153) return 523;
            if (index == 154) return 440;
            if (index == 155) return 523;
            if (index == 156) return 493;
            if (index == 157) return 523;
            if (index == 158) return 493;
            if (index == 159) return 440;
        }
        if (index < 170) {
            if (index == 160) return 493;
            if (index == 161) return 523;
            if (index == 162) return 587;
            if (index == 163) return 523;
            if (index == 164) return 493;
            if (index == 165) return 523;
            if (index == 166) return 440;
            if (index == 167) return 493;
            if (index == 168) return 523;
        }
        return -1;
    }
    static unsigned char GetCanonBeat(unsigned short index) {
        if (index < 10) {
            if (index == 0) return 2;
            if (index == 1) return 1;
            if (index == 2) return 1;
            if (index == 3) return 2;
            if (index == 4) return 1;
            if (index == 5) return 1;
            if (index == 6) return 1;
            if (index == 7) return 1;
            if (index == 8) return 1;
            if (index == 9) return 1;
        }
        if (index < 20) {
            if (index == 10) return 1;
            if (index == 11) return 1;
            if (index == 12) return 1;
            if (index == 13) return 1;
            if (index == 14) return 2;
            if (index == 15) return 1;
            if (index == 16) return 1;
            if (index == 17) return 2;
            if (index == 18) return 1;
            if (index == 19) return 1;
        }
        if (index < 30) {
            if (index == 20) return 1;
            if (index == 21) return 1;
            if (index == 22) return 1;
            if (index == 23) return 1;
            if (index == 24) return 1;
            if (index == 25) return 1;
            if (index == 26) return 1;
            if (index == 27) return 1;
            if (index == 28) return 2;
            if (index == 29) return 1;
        }
        if (index < 40) {
            if (index == 30) return 1;
            if (index == 31) return 2;
            if (index == 32) return 1;
            if (index == 33) return 1;
            if (index == 34) return 1;
            if (index == 35) return 1;
            if (index == 36) return 1;
            if (index == 37) return 1;
            if (index == 38) return 1;
            if (index == 39) return 1;
        }
        if (index < 50) {
            if (index == 40) return 1;
            if (index == 41) return 1;
            if (index == 42) return 2;
            if (index == 43) return 1;
            if (index == 44) return 1;
            if (index == 45) return 2;
            if (index == 46) return 1;
            if (index == 47) return 1;
            if (index == 48) return 1;
            if (index == 49) return 1;
        }
        if (index < 60) {
            if (index == 50) return 1;
            if (index == 51) return 1;
            if (index == 52) return 1;
            if (index == 53) return 1;
            if (index == 54) return 1;
            if (index == 55) return 1;
            if (index == 56) return 2;
            if (index == 57) return 1;
            if (index == 58) return 1;
            if (index == 59) return 2;
        }
        if (index < 70) {
            if (index == 60) return 1;
            if (index == 61) return 1;
            if (index == 62) return 1;
            if (index == 63) return 1;
            if (index == 64) return 1;
            if (index == 65) return 1;
            if (index == 66) return 1;
            if (index == 67) return 1;
            if (index == 68) return 1;
            if (index == 69) return 1;
        }
        if (index < 80) {
            if (index == 70) return 2;
            if (index == 71) return 1;
            if (index == 72) return 1;
            if (index == 73) return 2;
            if (index == 74) return 1;
            if (index == 75) return 1;
            if (index == 76) return 1;
            if (index == 77) return 1;
            if (index == 78) return 1;
            if (index == 79) return 1;
        }
        if (index < 90) {
            if (index == 80) return 1;
            if (index == 81) return 1;
            if (index == 82) return 1;
            if (index == 83) return 1;
            if (index == 84) return 2;
            if (index == 85) return 1;
            if (index == 86) return 1;
            if (index == 87) return 2;
            if (index == 88) return 1;
            if (index == 89) return 1;
        }
        if (index < 100) {
            if (index == 90) return 1;
            if (index == 91) return 1;
            if (index == 92) return 1;
            if (index == 93) return 1;
            if (index == 94) return 1;
            if (index == 95) return 1;
            if (index == 96) return 1;
            if (index == 97) return 1;
            if (index == 98) return 2;
            if (index == 99) return 1;
        }
        if (index < 110) {
            if (index == 100) return 1;
            if (index == 101) return 2;
            if (index == 102) return 1;
            if (index == 103) return 1;
            if (index == 104) return 1;
            if (index == 105) return 1;
            if (index == 106) return 1;
            if (index == 107) return 1;
            if (index == 108) return 1;
            if (index == 109) return 1;
        }
        if (index < 120) {
            if (index == 110) return 1;
            if (index == 111) return 1;
            if (index == 112) return 2;
            if (index == 113) return 1;
            if (index == 114) return 1;
            if (index == 115) return 2;
            if (index == 116) return 1;
            if (index == 117) return 1;
            if (index == 118) return 1;
            if (index == 119) return 1;
        }
        if (index < 130) {
            if (index == 120) return 1;
            if (index == 121) return 1;
            if (index == 122) return 1;
            if (index == 123) return 1;
            if (index == 124) return 1;
            if (index == 125) return 1;
            if (index == 126) return 2;
            if (index == 127) return 1;
            if (index == 128) return 1;
            if (index == 129) return 2;
        }
        if (index < 140) {
            if (index == 130) return 1;
            if (index == 131) return 1;
            if (index == 132) return 1;
            if (index == 133) return 1;
            if (index == 134) return 1;
            if (index == 135) return 1;
            if (index == 136) return 1;
            if (index == 137) return 1;
            if (index == 138) return 1;
            if (index == 139) return 1;
        }
        if (index < 150) {
            if (index == 140) return 2;
            if (index == 141) return 1;
            if (index == 142) return 1;
            if (index == 143) return 2;
            if (index == 144) return 1;
            if (index == 145) return 1;
            if (index == 146) return 1;
            if (index == 147) return 1;
            if (index == 148) return 1;
            if (index == 149) return 1;
        }
        if (index < 160) {
            if (index == 150) return 1;
            if (index == 151) return 1;
            if (index == 152) return 1;
            if (index == 153) return 1;
            if (index == 154) return 2;
            if (index == 155) return 1;
            if (index == 156) return 1;
            if (index == 157) return 2;
            if (index == 158) return 1;
            if (index == 159) return 1;
        }
        if (index < 170) {
            if (index == 160) return 1;
            if (index == 161) return 1;
            if (index == 162) return 1;
            if (index == 163) return 1;
            if (index == 164) return 1;
            if (index == 165) return 1;
            if (index == 166) return 1;
            if (index == 167) return 1;
            if (index == 168) return 16;
        }
        return -1;
    }
 };
