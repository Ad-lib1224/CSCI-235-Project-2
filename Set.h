/******************************************************************************
Title           : Set.h
Author          : Starasia Wright
Created on      : 2018-09-24
Description     : Provides interface to manage PlayList
******************************************************************************/
#ifndef SET_H_
#define SET_H_

#include "SetInterface.h"

template<class ItemType>
class Set : public SetInterface<ItemType> {

public: 

    Set(); //default constructor

    int getCurrentSize() const;

    bool isEmpty() const;

    bool add(const ItemType& newEntry);

    bool remove(const ItemType& anEntry);

    void clear();

    bool contains(const ItemType& anEntry) const;

    std::vector<ItemType> toVector() const; 
    
private:

    static const int DEFAULT_SET_SIZE = 4; // for testing purposes we will keep the set small

    ItemType items_[DEFAULT_SET_SIZE]; // array of set items 
    
    int item_count_;                  // current count of set items

    int max_items_;                   // max capacity of the set

    int getIndexOf(const ItemType& target) const; // Returns either the index of the element in the array items that contains the given target or -1, if the array does not contain the target              
}; //end Set

#include "Set.cpp"
#endif