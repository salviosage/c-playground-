#include <iostream>
using std::cout;
using std::endl;

int main()
{

    /*
     * TODO: Use this as a playground for writing if, else if and else statements
     * To get you started here, are some ideas:
     *
     * 1. Create an integer variable and a set of if, elseif and else statements that
     * output whether the number is positive or negative.
     *
     * 2. Create a character variable containing 'a' for acceleration, 'b' for braking,
     * 'p' for parked, or 'n' for neutral and outputs whether or not the vehicle is accelerating, braking,
     * parked or in neutral.
     *
     * Practice Using Boolean Logic
     *
     * You can see an example solution in the solution.cpp file
     */

    int x = 5;
    if (x > 0)
    {
        cout << "Positive Number" << endl;
    }
    else if (x < 0)
    {
        cout << "Negative Number" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }

    char status = 'a';

    if (status == 'a')
    {
        cout << "Accelerating" << endl;
    }
    else if (status == 'b')
    {
        cout << "Braking" << endl;
    }
    else if (status == 'p')
    {
        cout << "Parking" << endl;
    }
    else if (status == 'n')
    {
        cout << "Neutral" << endl;
    }
    else
    {
        cout << "Unknown" << endl;
    }

    int i = 0;
    while (i < 10)
    {
        if(i%2 == 0)
        {
            // print 2 is even or so 
            cout << i << " is even" << endl;
        }
        else
        {
            cout << i << "is Odd" << endl;
        }
        i++;
    }

    return 0;

}

