#include <iostream> // For debugging
#include <vector>
#include <random>
#include <climits>
#include <bits/stdc++.h>

using namespace std;

void sort(vector<int>& vec, int max, int min) { // Suppose Correct Input Variables
    int distinct_elements = max - min + 1; // 100 - 0 -> needs 101 elements
    int freqs[distinct_elements] = {0}; // in freqs[0] has frequency of min value in array

    for (auto val: vec) {
        freqs[val - min]++;
    }
    int idx = 0;
    for (unsigned int i = 0; i < distinct_elements; ++i) {
        int n = freqs[i];
        int val = i + min;
        while (n > 0) {
            vec.at(idx) = val;
            idx++;
            n--;
        }
    }


}
void generateVector(vector<int>& vec, int max, int min) {
    std::random_device rd;  // a seed source for the random number engine
    std::mt19937 gen(rd()); // mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> randint(min, max);

    for (int i = 0; i < vec.size(); ++i) {
        vec.at(i) = randint(gen);
        // std::cout << vec[i] << std::endl;
    }
}
int main(int argc, char** argv) {
    if(argc != 3) {
            std::cout << "random: must specify size of array" << std::endl;
            return (404); 
        }
    unsigned int SIZE = atoi(argv[1]);
    unsigned int sortType = atoi(argv[2]);
    if (SIZE <= 0) {
        std::cout << "size must be greater than 0" << std::endl;
        return (404); 
    }
    std::vector<int> vec(SIZE);
    generateVector(vec, 100, 0);
    // std::cout << "Generated" << std::endl;
    if (sortType == 0) sort(vec, 100, 0);
    else std::sort(vec.begin(), vec.end());

    // for (auto val: vec) {
    //     std::cout << val << endl;
    // }
    // std::cout << verifySort(vec) << std::endl;
}