#include <vector>

class List {
private:
    std::vector<int> list_;
public:
    void insertFront(int number);
    void insert(int number);
    void mergeList(List& l);
    void remove();
    void print();
};
