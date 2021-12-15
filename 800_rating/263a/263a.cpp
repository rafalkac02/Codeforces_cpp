/* Link to the problem: 
https://codeforces.com/problemset/problem/263/A */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int rows = 0;
    int columns = 0;
    int number;


    for(int i=0; i<5; i++)
    {
        rows = 0;
        columns++;
        for(int i=0; i<5; i++)
        {
            rows++;
            cin >> number;
            if(number == 1)
            {
                break;
            }

        }
        if(number == 1)
            {
                break;
            }
    }

    int moves = 0;
    moves += abs(columns-3);
    moves += abs(rows-3);

    cout << moves;

}