#include <iostream>
#include <random>
#include<chrono>
// #include "vector.h"
#include "cll.h" // Notice new implementation of Linked List

int main(int argc, char **argv) {
    if(argc != 2) {
        std::cout << "random: must specify number" << std::endl;
        return (404); 
    }
    int SIZE = atoi(argv[1]);

    // int SIZE = 10000;
    List list;
    for(int i = 0; i < SIZE; ++i) {   // Init Original List 
        list.insertFront(0);
    }
    List mergeList; // Init List that will be merged to the original list
    for (int i = 0; i < SIZE; ++i) {
        mergeList.insertFront(i);
    }
    
    auto start{std::chrono::steady_clock::now()};
    auto end{std::chrono::steady_clock::now()};
    // Start the clock
    start = std::chrono::steady_clock::now();
    list.mergeList(mergeList);
    end = std::chrono::steady_clock::now();
    // End Clock
    std::chrono::duration<double> elapsed_time{end - start};

    

    std::cout << "Run in: " << elapsed_time.count() << "s\n";
    return 0;
}

