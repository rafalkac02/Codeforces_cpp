/* Link to the problem: 
https://codeforces.com/problemset/problem/732/A */

#include <iostream>

using namespace std;

int main()
{
    int k, r, i;
    cin >> k >> r;

    for (i=1;;i++)
    {
        if(i*k%10==0 || i*k%10==r)
        {
            break;
        }
    }
    cout << i;
}