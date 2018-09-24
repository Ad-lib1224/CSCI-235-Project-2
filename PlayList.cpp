#include "Set.h"
#include "PlayList.h"
#include <iostream>
    
bool Set<ItemType>::removeSong(const ItemType& a_song) {
    //check if Playlist contains songs
    //if Playlist is not empty then check if the title, author and album of each song is identical 
    //if the values are the same, remove the song from the playlist
    int located_index = getIndexOf(anEntry);
    bool can_remove_song = !isEmpty() && (located_index > -1);
    if (can_remove_song) {
        item_count_--;
        items_[located_index] = items_[item_count_];
    }  // end if


    if (song1.setTitle == song2.setTitle) && (song1. setAuthor == song2.setAuthor) && (song1.setAlbum == song2.Album) {

        return can_remove_song;
    }  // end remove
}