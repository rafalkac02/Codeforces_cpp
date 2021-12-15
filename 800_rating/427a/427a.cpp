/* Link to the problem: 
https://codeforces.com/problemset/problem/427/A */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int hired = 0, untreated=0;

    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if (x>0) hired += x;
        else
        {
            if(hired>0) hired += x;
            else untreated++;
        }
    }
    cout << untreated;
}