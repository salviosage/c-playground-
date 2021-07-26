#include <iostream>
#include <vector>
#include "typedef.cpp"
bool test_normalize();
void show_grid(t_grid u);
t_grid normalize(t_grid u);
t_grid zeros(int a,int u);
int main (){
    std::cout<<test_normalize() << std::endl;
    return 0;
}

bool test_normalize() {
    //declare several variables on one line
    std::vector < std::vector <float> > unnormalized, normalized, result; 

    unnormalized = zeros(2, 2);
    normalized = zeros(2,2);

    int i,j;

    for (i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            unnormalized[i][j] = 1.0;
            normalized[i][j] = 0.25;
        }
    }

    result = normalize(unnormalized);

    bool correct;
    correct = close_enough(normalized, result);

    if (correct) {
        std::cout << "! - normalize function worked correctly!\n";
    }
    else {
        std::cout << "X - normalize function did not work correctly.\n";
        std::cout << "For the following input:\n\n";
        show_grid(unnormalized);
        std::cout << "\nYour code returned the following:\n\n";
        show_grid(result);
        std::cout << "\nWhen it should have returned the following:\n";
        show_grid(normalized);
    }
    return correct;
}