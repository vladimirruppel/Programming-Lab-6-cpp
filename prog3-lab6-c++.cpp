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

    TrackList* basePlaylist = new Playlist("Мой плейлист");

    // Вызов виртуальной функции через не виртуальную функцию базового класса
    basePlaylist->display();

    // Вызов виртуальной функции через динамический объект производного класса
    Playlist* derivedPlaylist = dynamic_cast<Playlist*>(basePlaylist);
    if (derivedPlaylist) {
        derivedPlaylist->display();
    }

    // Очистка памяти
    delete basePlaylist;
}