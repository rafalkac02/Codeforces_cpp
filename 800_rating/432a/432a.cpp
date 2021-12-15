/* Link to the problem: 
https://codeforces.com/problemset/problem/432/A */

#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int counter = 0;

    for (int i=0; i<n; i++)
    {
        int exp;
        cin >> exp;
        if (exp <= 5-k) counter++;
    }
    cout << counter/3;
}