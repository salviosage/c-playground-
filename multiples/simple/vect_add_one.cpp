#include "vect_add_one.h"
#include "increment_and_sum.h"

void AddOneToEach(vector<int> &v) {
    
    for (auto &i: v) {
        i += 1;
    }
}