/* Link to the problem: 
https://codeforces.com/problemset/problem/750/A */

#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int m = 240-k;
    int sum=0;
    
    int counter =0;
    for (int i=1; i<=n; i++)
    {
        if (sum+5*i>m) break;

        sum += 5*i;
        counter++;
    }
    cout << counter;
}