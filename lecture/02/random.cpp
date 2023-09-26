#include <iostream>
#include <random>
<<<<<<< HEAD
#include<chrono>
// #include "vector.h"
#include "cll.h" // Notice new implementation of Linked List
=======

// #include "vector.h"
// #include "list.h"
#include "deque.h"
>>>>>>> 2d8dc2d8a6f0375a0b1a38361cc66578c9f9db92

int main(int argc, char **argv) {
    if(argc != 2) {
        std::cout << "random: must specify number" << std::endl;
        return (404); 
    }
    int SIZE = atoi(argv[1]);

    // int SIZE = 10000;
    List list;
<<<<<<< HEAD
    for(int i = 0; i < SIZE; ++i) {   // Init Original List 
        list.insertFront(0);
    }
    List mergeList; // Init List that will be merged to the original list
    for (int i = 0; i < SIZE; ++i) {
        mergeList.insertFront(i);
=======

    std::random_device rd;  // a seed source for the random number engine
    std::mt19937 gen(rd()); // mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> randint(1, INT_MAX);

    for(int i = 0; i < number; ++i){    
        int number =  randint(gen);
        list.insert(number);
>>>>>>> 2d8dc2d8a6f0375a0b1a38361cc66578c9f9db92
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

