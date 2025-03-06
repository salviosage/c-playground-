#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::istringstream;
using std::ifstream;
using std::getline;

void ReadAndStreamFile(string path){
    ifstream my_file;
    my_file.open(path);
    if (my_file){
        cout << "The file stream has been created!" << endl;
        string line;
        while (getline(my_file, line)){
            istringstream stream_a(line);
            while(stream_a){
                string a;
                stream_a >> a;
                cout << a << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "The file stream has not been created successfully!" << endl;
    }
}

void ReadAndStreamBoard(string path){
    ifstream my_file;
    my_file.open(path);
    if (my_file){
        cout << "The file stream has been created!" << endl;
        string line;
        while (getline(my_file, line,'\n')){
            istringstream stream_a(line);
            string a;
            while(getline(stream_a, a, ',')){
                cout << a << ",";
            }
            cout << endl;
        }
    }
    else {
        cout << "The file stream has not been created successfully!" << endl;
    }
}

int main () {
    ReadAndStreamFile("files/stream");
    ReadAndStreamBoard("files/1.board");
    string a("0 1 2 3 5 salvi love counting,and jokes");

    istringstream my_stream(a);
    
    string n;
    
    while (getline(my_stream, n, ',') ) {
      cout << "That stream was successful: " << n << "\n";
    }
    cout << "The stream has failed." << "\n";
    
    return 0;
}