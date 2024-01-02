#pragma once
#define NOMINMAX
#include <Windows.h>
#include "AuditionsNumber.h"
#include "AudioFile.h"
#include "TrackList.h"
#include "Playlist.h"
#include "AudioPlayer.h"
#include "AudioCollection.h"
#include "MusicLibrary.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Playlist playlist("Мой плейлист");
    AudioFile audioFile("file1.mp3", "FRIENDLY THUG 52 NGG", "No Gletcher Gang", 203, 2023); 
    playlist.add(audioFile);

    TrackList* trackList = &playlist;
    trackList->display();
}