#include <iostream>
#include <vector>
using std::vector;

int main()
{
    auto i = 4;
    auto j = '3';
    auto k = 3.3;
    auto l = "Hello";
    // auto v_4 = {1, 2, 3};
    vector<int> my_vector = {1, 2, 3, 4, 5};

    // Using auto for a loop
    for (auto value : my_vector)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}