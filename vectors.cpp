# include <iostream>
# include <vector>
using std::vector;
using std::cout;
using std::endl;

int main ()
{
    // vector save variables of same type
    // 1 d vector
    vector<int> v_1{0,1,2};
    vector<char> v_2 = {'4',6,3};
    vector <char> v_3;
    v_3 = {'1'};
    v_1[1] = 5;
    cout << v_1[1] << endl;

    cout << v_1[0] << endl << v_2[0] << endl << v_3[0] << endl;

    // 2 d vector
    vector<vector<char>> v_4 = {{'1',2},{'3','4'}, {5,6}, {7,'8'}}; 

    cout << v_4.size();
    cout << v_4[0].size() << endl;
    return 0;
}