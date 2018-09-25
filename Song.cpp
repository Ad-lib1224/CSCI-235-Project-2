/******************************************************************************
Title           : Song.cpp
Author          : Starasia Wright
Created on      : 2018-09-24
Description     : Provides the interface to generate a playlist
******************************************************************************/
#include "Set.h"
#include "Song.h"
#include <string>
#include <iostream>

//Default contructor for Song which initializes values

Song::Song() {
    
    std::string title_;

    std::string author_;

    std::string album_;
}

//Assigns private values to default values

Song::Song(const std::string& title, const std::string& author, const std::string& album) {
    
    title_ = title;
    
    author_ = author;
    
    album_ = album;

}

void Song::setTitle(std::string title) {
    
    title_ = title;
    
}

void Song::setAuthor(std::string author) {
    
    author_ = author;
    
}

void Song::setAlbum(std::string album) {
   
    album_ = album;
}

//Accessor for title_

std::string Song::getTitle() const {
    
    return title_;
 
}

//Accessor for author_

std::string Song::getAuthor() const {
    
    return author_;
}

//Accessor for album_

std::string Song::getAlbum() const {
    
    return album_;
 
}

bool operator==(const Song &lhs, const Song &rhs){
  if(lhs == rhs){
    return true;
  }
  return false;
}