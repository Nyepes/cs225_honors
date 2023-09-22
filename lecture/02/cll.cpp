#include "cll.h"

void List::mergeList(List& l) {
    l.tail_ -> nxt = head_;
    head_ = l.head_;
    l.tail_ = NULL;
    l.head_ = NULL;
}
void List::insertFront(int number) {
    Node* start = new Node(number);
    start -> nxt = head_;
    head_ = start;
    if (tail_ == NULL) tail_ = head_;
}