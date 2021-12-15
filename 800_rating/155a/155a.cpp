/* Link to the problem: 
https://codeforces.com/problemset/problem/155/A */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int scores[n];
    int amazing = 0;

    for(int i=0; i<n; i++)
    {
        cin >> scores[i];
    }

    int min = scores[0]; int max = scores[0];

    for(int i=1; i<n; i++)
    {
        if (scores[i] < min)
        {
            amazing++;
            min = scores[i];
        }
        else if (scores[i] > max) 
        {
            amazing++;
            max = scores[i];
        }
    }
    cout << amazing;
}