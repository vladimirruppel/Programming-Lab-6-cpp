#pragma once
#include <vector>
#include "AudioFile.h"

class TrackList
{
protected:
    std::vector<AudioFile> list;
public:
    // ������������
    TrackList();
    TrackList(std::vector<AudioFile> list);

    // �������
    void setTrackList(std::vector<AudioFile> list);

    // �������
    std::vector<AudioFile> getTrackList();
    int getSize();
    AudioFile& getTrackByIndex(int index);

    // ������
    void add(const AudioFile& audioFile);
    void removeTrackByIndex(int index);
    void display();
    TrackList operator+(const AudioFile& audioFile) const;
};