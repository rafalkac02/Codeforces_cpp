/* Link to the problem: 
https://codeforces.com/problemset/problem/758/A */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0, cash[n], counter=0;
    
    for(int i=0; i<n; i++)
    {
        cin >> cash[i];
        if (cash[i]>max) max=cash[i];
    }

    for(int i=0; i<n; i++)
    {
        counter += max-cash[i];
    }
    cout << counter;
}