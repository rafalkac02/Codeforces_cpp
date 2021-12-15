/* Link to the problem: 
https://codeforces.com/problemset/problem/546/A */

#include <iostream>

using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int cost = 0;

    for (int i = 1; i<=w; i++)
    {
        cost += i*k;
    }


    if(n>=cost)
    {
        cout << 0;
    }
    else
    {
        cout << cost-n;
    }

}