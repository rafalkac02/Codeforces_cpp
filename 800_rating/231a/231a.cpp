/* Link to the problem: 
https://codeforces.com/problemset/problem/231/A */

#include <iostream>

using namespace std;

int main()
{
    int problems;
    cin >> problems;
    
    int friends = 3, solutions = 0;

    for (int i = 0; i < problems; i++)
    {
        int votes = 0;
        for (int i = 0; i < friends; i++)
        {
            int vote;
            cin >> vote;
            votes += vote;
        }
        if(votes > (friends/2))
        {
            solutions++;
        }
        
    }
    cout << solutions;
}