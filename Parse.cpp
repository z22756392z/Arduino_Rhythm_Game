#include <iostream>
#include<string.h>
using namespace std;


unsigned short Melody(char* m) {
      if (m == "O1C") return 32;
  if (m == "O1Db") return 34;
  if (m == "O1D") return 36;
  if (m == "O1Eb") return 38;
  if (m == "O1E") return 41;
  if (m == "O1F") return 43;
  if (m == "O1Gb") return 46;
  if (m == "O1G") return 48;
  if (m == "O1Ab") return 51;
  if (m == "O1A") return  55;
  if (m == "O1Bb") return 58;
  if (m == "O1B") return 61;
  if (m == "O2C") return 65;
  if (m == "O2Db") return 69;
  if (m == "O2D") return 73;
  if (m == "O2Eb") return 77;
  if (m == "O2E") return 82;
  if (m == "O2F") return 87;
  if (m == "O2Gb") return 92;
  if (m == "O2G") return 97;
  if (m == "O2Ab") return 103;
  if (m == "O2A") return  110;
  if (m == "O2Bb") return 116;
  if (m == "O2B") return 123;
  if (m == "O3C") return 130;
  if (m == "O3Db") return 138;
  if (m == "O3D") return 146;
  if (m == "O3Eb") return 155;
  if (m == "O3E") return 164;
  if (m == "O3F") return 174;
  if (m == "O3Gb") return 185;
  if (m == "O3G") return 196;
  if (m == "O3Ab") return 207;
  if (m == "O3A") return  220;
  if (m == "O3Bb") return 233;
  if (m == "O3B") return 246;
  if (m == "O4C") return 261;
  if (m == "O4Db") return 277;
  if (m == "O4D") return 293;
  if (m == "O4Eb") return 311;
  if (m == "O4E") return 329;
  if (m == "O4F") return 349;
  if (m == "O4Gb") return 369;
  if (m == "O4G") return 392;
  if (m == "O4Ab") return 415;
  if (m == "O4A") return  440;
  if (m == "O4Bb") return 466;
  if (m == "O4B") return 493;
  if (m == "O5C") return 523;
  if (m == "O5Db") return 554;
  if (m == "O5D") return 587;
  if (m == "O5Eb") return 622;
  if (m == "O5E") return 659;
  if (m == "O5F") return 698;
  if (m == "O5Gb") return 739;
  if (m == "O5G") return 783;
  if (m == "O5Ab") return 830;
  if (m == "O5A") return  880;
  if (m == "O5Bb") return 932;
  if (m == "O5B") return 987;
  if (m == "O6C") return 1046;
  if (m == "O6Db") return 1108;
  if (m == "O6D") return 1174;
  if (m == "O6Eb") return 1244;
  if (m == "O6E") return 1318;
  if (m == "O6F") return 1396;
  if (m == "O6Gb") return 1480;
  if (m == "O6G") return 1568;
  if (m == "O6Ab") return 1661;
  if (m == "O6A") return  1760;
  if (m == "O6Bb") return 1867;
  if (m == "O6B") return 1957;
  if (m == "O7C") return 2093;
  if (m == "O7Db") return 2217;
  if (m == "O7D") return 2349;
  if (m == "O7Eb") return 2489;
  if (m == "O7E") return 2637;
  if (m == "O7F") return 2793;
  if (m == "O7Gb") return 2960;
  if (m == "O7G") return 3136;
  if (m == "O7Ab") return 3322;
  if (m == "O7A") return  3520;
  if (m == "O7Bb") return 3729;
  if (m == "O7B") return 3951;
  if (m == "O8C") return 4186;
  if (m == "O8Db") return 4434;
  if (m == "O8D") return 4698;
  if (m == "O8Eb") return 4978;
  if (m == "O8E") return 5274;
  if (m == "O8F") return 5587;
  if (m == "O8Gb") return 5919;
  if (m == "O8G") return 6271;
  if (m == "O8Ab") return 6644;
  if (m == "O8A") return  7040;
  if (m == "O8Bb") return 7458;
  if (m == "O8B") return 7902;
  return 0;
}
char* CharMelody[] = {
 "O5G","O5E","O5F","O5G","O5E","O5F",// 副歌
    "O5G","O4B","O4A","O4B","O5C","O5D","O5E","O5F",
    "O5E","O5C","O5D","O5E","O4E","O4F",
    "O4G","O4A","O4G","O4F","O4G","O5C","O4B","O5C",
    "O4A","O5C","O4B","O4A","O4G","O4F",
    "O4G","O4F","O4E","O4F","O4G","O5C","O4B","O5C",
    "O4A","O5C","O4B","O5C","O4B","O5C",
    "O4B","O4A","O4B","O5C","O5D","O5E","O5F","O5G",
    "O5G","O5E","O5F","O5G","O5E","O5F",// 副歌
    "O5G","O4B","O4A","O4B","O5C","O5D","O5E","O5F",
    "O5E","O5C","O5D","O5E","O4E","O4F",
    "O4G","O4A","O4G","O4F","O4G","O5C","O4B","O5C",
    "O4A","O5C","O4B","O4A","O4G","O4F",
    "O4G","O4F","O4E","O4F","O4G","O5C","O4B","O5C",
    "O4A","O5C","O4B","O5C","O4B","O5C",
    "O4B","O4A","O4B","O5C","O5D","O5E","O5F","O5G",
    "O5E","O5C","O5D","O5E","O5D","O5C",// 副歌02
    "O5D","O4B","O5C","O5D","O5E","O5D","O5D","O4B",
    "O5C","O4A","O4B","O5C","O4C","O4D",
    "O4E","O4F","O4E","O4D","O4E","O5C","O4B","O5C",
    "O4A","O5C","O4B","O4A","O4G","O4F",
    "O4G","O4F","O4E","O4F","O4G","O5C","O4B","O5C",
    "O4A","O5C","O4B","O5C","O4B","O4A",
    "O4B","O5C","O5D","O5C","O4B","O5C","O4A","O4B",
    "O5C",
};

unsigned int beat[] = {
 2,1,1,2,1,1,// 副歌
    1,1,1,1,1,1,1,1,
    2,1,1,2,1,1,
    1,1,1,1,1,1,1,1,
    2,1,1,2,1,1,
    1,1,1,1,1,1,1,1,
    2,1,1,2,1,1,
    1,1,1,1,1,1,1,1,
    2,1,1,2,1,1,// 副歌
    1,1,1,1,1,1,1,1,
    2,1,1,2,1,1,
    1,1,1,1,1,1,1,1,
    2,1,1,2,1,1,
    1,1,1,1,1,1,1,1,
    2,1,1,2,1,1,
    1,1,1,1,1,1,1,1,
    2,1,1,2,1,1,// 副歌02
    1,1,1,1,1,1,1,1,
    2,1,1,2,1,1,
    1,1,1,1,1,1,1,1,
    2,1,1,2,1,1,
    1,1,1,1,1,1,1,1,
    2,1,1,2,1,1,
    1,1,1,1,1,1,1,1,
    16,
};



void GetMelodyFunction(char* funcName){
    cout << "static unsigned short " << funcName << "(unsigned short index){" << endl;
    int cunt = 0;
    for(int i = 0 ;  i < sizeof(beat) / 4 ; i++){
        if(i == cunt){
            if(cunt != 0){
                cout << "    }" << endl;
            }
            cout << "    if(index < " << to_string(cunt+10) << ") {" << endl;
            cunt+=10;
        }

        cout << "      if(index == "<< i <<") " << "return " << Melody(CharMelody[i]) << ";" << endl;
    }
    cout << "    }" << endl;
    cout << "    return -1;" << endl << "}" << endl;
}

void GetBeatFunction(char* funcName){
    cout << "static unsigned char " << funcName << "(unsigned short index){" << endl;
    int cunt = 0;
for(int i = 0 ;  i < sizeof(beat) / 4 ; i++){
        if(i == cunt){
            if(cunt != 0){
                cout << "    }" << endl;
            }
            cout << "    if(index < " << to_string(cunt+10) << ") {" << endl;
            cunt+=10;
        }

        cout << "      if(index == "<< i <<") " << "return " << beat[i] << ";" << endl;
    }
    cout << "    }" << endl;
    cout << "    return -1;" << endl << "}" << endl;
}
int main(){
    GetMelodyFunction("GetCanonMelody");
    GetBeatFunction("GetCanonBeat");
}
