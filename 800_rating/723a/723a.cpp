/* Link to the problem: 
https://codeforces.com/problemset/problem/723/A */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x[3];
    for (int i=0; i<3; i++)
    {
        cin >> x[i];
    }
    sort(x, x+3);

    cout << x[2] - x[0] << endl;
}