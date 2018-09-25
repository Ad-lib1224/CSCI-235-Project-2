/******************************************************************************
Title           : Set.cpp
Author          : Starasia Wright
Created on      : 2018-09-24
Description     : Set is an ADT that inherits SetInterface's public member functions
******************************************************************************/

#include "Set.h"
#include <vector>
#include <iostream>

template <class ItemType>
Set<ItemType>::Set() : item_count_(0), max_items_(DEFAULT_SET_SIZE) {}

//Gets the current number of entries in this set.

template <class ItemType> int Set<ItemType>::getCurrentSize() const {
  return item_count_;
}

//Checks if the set is empty

template <class ItemType> bool Set<ItemType>::isEmpty() const {
  if (item_count_ == 0) {
    return true;
  }
  return false;
}

//Adds a new song (entry)

template <class ItemType> bool Set<ItemType>::add(const ItemType &newEntry) {
  if(item_count_ < max_items_){
    items_[item_count_] = newEntry;
    item_count_ += 1;
    return true;
  }
  return false;
}

//Removes a duplicate entry from this set

template <class ItemType> bool Set<ItemType>::remove(const ItemType &anEntry) {
    
  //sort array so duplicates will come sequentially
    // if the current element isn't a duplicate of the last element
    // in the result array, we "append" it to the result array
    
  for(int i = 0; i < item_count_; i++){
    if(items_[i].getTitle() == anEntry.getTitle()) {
      items_[i]=items_[item_count_-1];
      item_count_ = item_count_ - 1;
      return true;
    }
  }
  return false;
}

//Removes all songs (entries) from this set

template <class ItemType> void Set<ItemType>::clear() {
    
    item_count_ = 0;
}

//Tests if set was given an entry

template <class ItemType>
bool Set<ItemType>::contains(const ItemType &anEntry) const {
    
  for(int i = 0; i < item_count_; i++){
      
    if(items_[i].getTitle() == anEntry.getTitle()) {
        
      return true;
    }
  }
  return false;
}

template <class ItemType>
std::vector<ItemType> Set<ItemType>::toVector() const {
    
  std::vector<ItemType> set_entries;
    
  for(int i = 0; i < max_items_; i++) {
    set_entries.push_back(items_[i]);
  }
  return set_entries;
}