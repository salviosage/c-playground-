#include <iostream>
#include <fstream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::ifstream;

void ReadBoardFile(string path) {
    ifstream myfile;
    myfile.open(path);
    if (myfile) {
        string line;
        while (getline(myfile, line)) {
            cout << line << endl;
        }
    }
}

int main() {
    ReadBoardFile("files/1.board");
    ifstream my_file;
    my_file.open("files/1.board");
    if (my_file) {
        cout << "The file stream has been created!" << endl;
        string line;
        while (getline(my_file, line)) {
            cout << line << endl;
        }
    }
    else {
        cout << "The file stream has not been created successfully!" << endl;
    }
}