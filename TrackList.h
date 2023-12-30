#pragma once
#include <vector>
#include "AudioFile.h"

class TrackList
{
protected:
    std::vector<AudioFile> list;
public:
    // конструкторы
    TrackList();
    TrackList(std::vector<AudioFile> list);

    // сеттеры
    void setTrackList(std::vector<AudioFile> list);

    // геттеры
    std::vector<AudioFile> getTrackList();
    int getSize();
    AudioFile& getTrackByIndex(int index);

    // методы
    void add(const AudioFile& audioFile);
    void removeTrackByIndex(int index);
    void display();
    TrackList operator+(const AudioFile& audioFile) const;
};