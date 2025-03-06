#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

// TODO: Add the ParseLine function here.

void PrintVector(vector<int> v)
{
    cout << "{ ";
    for (auto item : v)
    {
        cout << item << " ";
    }
    cout << "}" << "\n";
}
vector<int> ParseLine(string line)
{
    istringstream sline(line);
    int n;
    char m;
    vector<int> row;
    while (sline >> n >> m && m == ',')
    {
        row.push_back(n);
    }
    return row;
}
vector<vector<int>> ReadBoardFile(string path)
{
    ifstream myfile(path);
    vector<vector<int>> board;
    if (myfile)
    {
        string line;
        vector<int> row;
        while (getline(myfile, line))
        {
            row = ParseLine(line);
            board.push_back(row);
        }
    }
    return board;
}
void TestParseLine()
{
    cout << "----------------------------------------------------------" << "\n";
    cout << "TestParseLine: ";
    string line = "0,1,0,0,0,0,";
    vector<int> solution_vect{0, 1, 0, 0, 0, 0};
    vector<int> test_vect;
    test_vect = ParseLine(line);
    if (test_vect != solution_vect)
    {
        cout << "failed" << "\n";
        cout << "\n"
             << "Test input string: " << line << "\n";
        cout << "Your parsed line: ";
        PrintVector(test_vect);
        cout << "\n";
    }
    else
    {
        cout << "passed" << "\n";
    }
    cout << "----------------------------------------------------------" << "\n";
    return;
}

void PrintBoard(const vector<vector<int>> board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            cout << board[i][j];
        }
        cout << "\n";
    }
}

// #include "test.cpp" // For testing.

int main()
{
    vector<vector<int>> board = ReadBoardFile("files/2.board");
    TestParseLine();
    PrintBoard(board);
}
