/* Link to the problem: 
https://codeforces.com/problemset/problem/486/A */

#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long result;

    if (n%2 == 0)
    {
        result = n/2;
    }
    else
    {
        result = -((n+1)/2);
    }

    cout << result;
}