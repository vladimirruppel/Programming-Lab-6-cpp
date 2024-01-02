#pragma once
#define NOMINMAX
#include <Windows.h>
#include "AuditionsNumber.h"
#include "AudioFile.h"
#include "TrackList.h"
#include "Playlist.h"
#include "Album.h"
#include "AudioPlayer.h"
#include "AudioCollection.h"
#include "MusicLibrary.h"
#include "DisplayParent.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    AudioFile audioFile("file1.mp3", "FRIENDLY THUG 52 NGG", "No Gletcher Gang", 203, 2023); 
    std::vector<AudioFile> trackList{audioFile};
    
    Album album("FRIENDLY THUG 52 NGG", "Cristoforo Colombo", trackList);
    MusicLibrary musicLibrary(trackList);
    
    DisplayParent<Album> albumDisplayParent;
    albumDisplayParent.display(album);
    DisplayParent<MusicLibrary> musicLibraryDisplayParent;
    musicLibraryDisplayParent.display(musicLibrary);
}