#include <cstddef>
struct Node {
    int num = 0;
    Node* nxt = NULL;
    Node(int n) {num = n;};
};

class List {
private:
    Node* head_ = NULL;
    Node* tail_ = NULL;

public:
    void mergeList(List& l);
    void insertFront(int number);

};