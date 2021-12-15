/* Link to the problem: 
https://codeforces.com/problemset/problem/467/A */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int rooms = 0;
    for(int i=0; i<n; i++)
    {
        int p, q;
        cin >> p >> q;
        if ((p+1)<q)
        {
            rooms++;
        }
    }
    cout << rooms;
}