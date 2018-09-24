/******************************************************************************
Title           : Set.cpp
Author          : Starasia Wright
Created on      : 2018-08-30
Description     : 
******************************************************************************/

#include "Set.h"
    
template<class ItemType>
Set<ItemType>::Set(): item_count_(0), max_items_(DEFAULT_SET_SIZE) {
}  // end default constructor

template<class ItemType> 
int Set<ItemType>::getCurrentSize() const {
	return item_count_;
} // end getCurrentSize

template<class ItemType>
bool Set<ItemType>::isEmpty() const {
    return item_count_ == 0;
}  // end isEmpty

template<class ItemType>
bool Set<ItemType>::add(const ItemType& newEntry) {
    bool space_to_add = (item_count_ < max_items_);
        if (space_to_add) {
            items_[item_count_] = newEntry; //create new entry
            item_count_++; //add the new entry
        }  // end if

        return space_to_add;
}  // end add

template<class ItemType>
bool Set<ItemType>::remove(const ItemType& anEntry) {
    return false;
}  // end remove

template<class ItemType>
void Set<ItemType>::clear() {
    item_count_ = 0;
}  // end clear

template<class ItemType>
bool Set<ItemType>::contains(const ItemType& anEntry) const {
    return getIndexOf(anEntry) > -1;
}  // end contains

template<class ItemType>
std::vector<ItemType> Set<ItemType>::toVector() const {
    std::vector<ItemType> set_entries;
    for (int i = 0; i < item_count_; i++)
        set_entries.push_back(items_[i]);

    return set_entries;
}  // end toVector

// private

template<class ItemType>
int Set<ItemType>::getIndexOf(const ItemType& target) const {
        bool found = false;
        int result = -1;
        int search_index = 0;

        // If the set is empty, item_count_ is zero, so loop is skipped
        while (!found && (search_index < item_count_))
        {
            if (items_[search_index] == target)
            {
                found = true;
                result = search_index;
            } 
            else
            {
                search_index++;
            }  // end if
        }  // end while

        return result;
}  // end getIndexOf

template<class ItemType>
int Set<ItemType>::getCurrentSize() {
    {
        bool found = false;
        int result = -1;
        int search_index = 0;

        // If the bag is empty, item_count_ is zero, so loop is skipped
        while (!found && (search_index < item_count_)) {
            if (items_[search_index] == target) {
                found = true;
                result = search_index;
            } 

            else {
                search_index++;
            }  // end if
        }  // end while

        return result;
}  // end getIndexOf