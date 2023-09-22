#include <list>

class List {
private:
    std::list<int> list_;
public:
    void insertFront(int number);
    void insert(int number);
    void mergeList(List& l);
    void remove();
    void print();
};
