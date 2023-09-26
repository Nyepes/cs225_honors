#include "vector.h"
#include <iostream>

void List::insert(int number) {

<<<<<<< HEAD
    auto it = list_.begin();
    while (it != list_.end() && (*it < number)) {
        ++it;
    }
    list_.insert(it, number);
}

void List::insertFront(int number) {
    list_.push_back(number);
}
void List::remove() {
    list_.erase(list_.end() - 1);
}
void List::mergeList(List& l) {
    list_.insert(list_.end(), l.list_.rbegin(), l.list_.rend());
    l.list_.clear();
=======
    list_.insert(std::upper_bound( list_.begin(), list_.end(), number), number);
    // auto it = list_.begin();
    // while (it != list_.end() && (*it < number)) {
    //     ++it;
    // }
    // list_.insert(it,number);
}

void List::remove(int index) {
    auto it = list_.begin();

    it += index;
    // while(index-- > 0) {
    //     ++it;
    // }

    list_.erase(it);
>>>>>>> 2d8dc2d8a6f0375a0b1a38361cc66578c9f9db92
}

void List::print() {

    for( int num : list_) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}