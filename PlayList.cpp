#include "PlayList.h"
#include <iostream>

//Every PlayList function calls the corresponding Set function since the tasks are the same
    
//Default
    
PlayList::PlayList() {
    
    Set<Song> playlist_;
}

//Passes new_song as anEntry. If successful, new_song is added to the playlist

PlayList::PlayList(const Song &a_song) {
    playlist_.add(a_song); 
}

//Gets the current number of songs in the playlist

int PlayList::getNumberOfSongs() const {
    
  return playlist_.getCurrentSize();
}

//Checks if the playlist is empty

bool PlayList::isEmpty() const {
    
  if(playlist_.getCurrentSize() == 0){
      
    return true;
  }
  return false;
}

//Checks if song is already in playlist before adding it

bool PlayList::addSong(const Song &new_song) {
    
  if(playlist_.contains(new_song)){
      
    return false;
  }
    
  playlist_.add(new_song);
    
  return true;
}

//Removes duplicate songs from playlist

bool PlayList::removeSong(const Song &a_song) {
    
    return playlist_.remove(a_song);
}

//Removes all entries from playlist

void PlayList::clearPlayList() {
    
    return playlist_.clear();
}

//First, it gets the size of the playlist
//Then, it displays every song, including its title, author and album, in playlist until it reaches the end of the playlist

void PlayList::displayPlayList() const {
    
  std::vector<Song> vec_list = playlist_.toVector();
    
  for(int i = 0; i < playlist_.getCurrentSize(); i++) {
      
    std::cout << "* Title: " << vec_list[i].getTitle() << " * Author: " << vec_list[i].getAuthor() << " * Album: " << vec_list[i].getAlbum() << " *" << std::endl;
      
  }
    
  std::cout << "End of playlist" << std::endl;
    
}