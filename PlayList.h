#ifndef PLAY_LIST_H_
#define PLAY_LIST_H_

#include "Set.h"
#include "SetInterface.h"
#include "Song.h"

class PlayList {
    public: 
        
        //default constructor

        PlayList();
    
        //paramatized constructor 
    
        PlayList(const Song &a_song);
    
        //returns number of entries
    
        int getNumberOfSongs() const;
    
        //checks if there are no entries
    
        bool isEmpty() const;
    
        //adds new entry to playlist
    
        bool addSong(const Song &new_song);
    
        //removes duplicates entries from playlist
    
        bool removeSong(const Song &a_song);
    
        //removes all entries
    
        void clearPlayList();
    
        //displays current entries (Title, Author, Album)
    
        void displayPlayList() const;

    private: 
        
        //allows us to call public Set memeber functions
    
        Set<Song> playlist_;
};

#endif