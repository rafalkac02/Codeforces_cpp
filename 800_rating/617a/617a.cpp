/* Link to the problem: 
https://codeforces.com/problemset/problem/617/A */

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int steps;

    if(x%5 == 0)
    {
        steps = x/5;
    }
    else
    {
        steps = x/5 + 1;
    }

    cout << steps;

}