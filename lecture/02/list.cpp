#include "list.h"

#include <iostream>

void List::insert(int number) {
    // list_.insert(std::upper_bound( list_.begin(), list_.end(), number), number);
    auto it = list_.begin();
    while (it != list_.end() && (*(it) < number)) {
        ++it;
    }
    // int* num = new int(number);
    list_.insert(it, number);
}

void List::mergeList(List& l) {
    list_.insert(list_.begin(), l.list_.begin(), l.list_.end());
}

void List::insertFront(int number) {
    list_.push_front(number);
}

void List::remove() {
    list_.pop_front();
}

void List::print() {

    for( int num : list_) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}