/* Link to the problem: 
https://codeforces.com/problemset/problem/472/A */

#include <iostream>

using namespace std;

bool composite(int num)
{
    for(int i=2; i<num; i++)
    {
        if(num % i == 0) return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int i;

    for (i=4; i<n; i++)
    {
        if (composite(i) && composite(n-i)) break;
    }
    cout << i << " " << n-i << endl;
}