
#include <iostream>
#include <vector>
typedef std::vector < std::vector <float> > t_grid;
bool close_enough(float v1, float v2) ;

bool close_enough(t_grid g1, t_grid g2);

int main(){
std::cout <<close_enough(2,3);
return 0;
};
bool close_enough(float v1, float v2) { 
    if (abs(v2-v1) > 0.0001 ) {
        return false;
    } 
    return true;
}


bool close_enough(std::vector < std::vector <float> > g1, t_grid g2) {
    int i, j;
    float v1, v2;
    for (i=0; i<g1.size(); i++) {
        for (j=0; j<g1[0].size(); j++) {
            v1 = g1[i][j];
            v2 = g2[i][j];
            if (abs(v2-v1) > 0.0001 ) {
                return false;
            }
        }
    }
    return true;
}