#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main ()
{
    vector<vector<int>>  v_4{{0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0}};

    for (auto i : v_4)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << std::endl;
    }
    return 0;
}