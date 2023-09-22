#include "vector.h"
#include <iostream>

void List::insert(int number) {

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
}

void List::print() {

    for( int num : list_) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}