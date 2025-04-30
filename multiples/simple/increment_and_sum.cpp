#include <iostream>
#include "vect_add_one.h"
using std::cout;

int IncrementAndComputeVectorSum(vector<int> v) {
    int total = 0;
    AddOneToEach(v);

    for (auto i: v) {
        total += i;
    }
    cout << "The total is: " << total << "\n";
    cout << "The vector is: ";
    for (auto i: v) {
        cout << i << " ";
    }
    cout << "\n";
    cout << "The size of the vector is: " << v.size() << "\n";
    cout << "The capacity of the vector is: " << v.capacity() << "\n";
    cout << "The max size of the vector is: " << v.max_size() << "\n";
    cout << "The address of the vector is: " << &v << "\n";
   
    return total;
}