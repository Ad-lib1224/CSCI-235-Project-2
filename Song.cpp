/******************************************************************************
Title           : Customer.cpp
Author          : Starasia Wright
Created on      : 2018-08-30
Description     : Provides the interface to access customer information
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

//Accessor for title_

string Song::getTitle() {
    
    return title_;
 
}

//Accessor for author_

string Song::getAuthor() {
    
    return author_;
}

//Accessor for album_

int Song::getAlbum() {
    
    return album_;
 
}

void Song::setTitle(string title) {
    
}

void Song::setAuthor(string author) {
    
}

void Song::setAlbum(string album) {
    
}