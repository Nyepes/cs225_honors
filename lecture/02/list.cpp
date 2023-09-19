#include "list.h"

#include <iostream>

void List::insert(int number) {
    // list_.insert(std::upper_bound( list_.begin(), list_.end(), number), number);
    auto it = list_.begin();
    while (it != list_.end() && (*(*it) < number)) {
        ++it;
    }
    int* num = new int(number);
    list_.insert(it, num);
}

void List::remove(int index) {
    auto it = list_.begin();
    
    while(index-- > 0) {
        ++it;
    }

    list_.erase(it);
}

void List::print() {

    for( int* num : list_) {
        std::cout << *num << " ";
    }
    std::cout << std::endl;
}