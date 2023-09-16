#pragma once
#ifndef SONG_H
#define SONG_H

struct Song {
    unsigned short (*melody)(unsigned short);
    unsigned char (*beat)(unsigned short);
    char* name;
    float BT;
    unsigned short size;
    unsigned char difficulty;
    Song() :melody(NULL), beat(NULL),name(""),BT(0.5),size(0),difficulty(0) {}
    Song(unsigned short (*melody)(unsigned short), unsigned char (*beat)(unsigned short),char* name,float BT, unsigned int size,unsigned char difficulty = 4) :melody(melody), beat(beat),name(name),BT(BT),size(size),difficulty(difficulty) {}
};
#endif