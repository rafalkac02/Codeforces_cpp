/* Link to the problem: 
https://codeforces.com/problemset/problem/144/A */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n];

    int min = 101, max = 0, smax, smin;

    // populate array
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }

    // determine min and max height
    for(int i=0; i<n; i++)
    {
        if (s[i] > max)
        {
            max = s[i];
            smax = i;
        }
        if (s[i] <= min)
        {
            min = s[i];
            smin = i;
        }
    }

    if (smin < smax)
    {
        cout << n-2-smin+smax;
    }
    else
    {
        cout << n-1-smin + smax;
    }
}