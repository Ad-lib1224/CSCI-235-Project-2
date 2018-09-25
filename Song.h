/******************************************************************************
Title           : PlayList.cpp
Author          : Starasia Wright
Created on      : 2018-09-24
Description     : Provides interface to manage PlayList
******************************************************************************/
#ifndef SONG_H_
#define SONG_H_
    
#include <string>
    
class Song {
    
        public:
    
            //default constructor
    
            Song();

            //paramatized constructor
    
            Song(const std::string& title, const std::string& author = "", const std::string& album = "");
            
            //assigns title to title_
    
            void setTitle(std::string title);  //"set" in setTitle here means "give a value" and has nothing to do with the Set class. Similarly for setAuthor and setAlbum
    
            //assigns author to author_

            void setAuthor(std::string author);
            
            //assigns album to album_

            void setAlbum(std::string album);
            
            //return title_

            std::string getTitle() const;
            
            //return author_

            std::string getAuthor() const;
            
            //return album_
    
            std::string getAlbum() const;

            //grants access to private Song members to allow modification
    
            friend bool operator==(const Song& lhs, const Song& rhs);
        
        private:
            
            std::string title_;

            std::string author_;

            std::string album_;
};

#endif