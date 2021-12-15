/* Link to the problem: 
https://codeforces.com/problemset/problem/344/A */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int groups = 1;

    string magnets[n];

    // populate array
    for(int i=0; i<n; i++)
    {
        cin >> magnets[i];
    }

    for(int i=0; i<n-1; i++)
    {
        if (magnets[i][1] == magnets[i+1][0])
        {
            groups++;
        }
    }

    cout << groups;

}