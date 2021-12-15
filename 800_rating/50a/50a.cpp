/* Link to the problem: 
https://codeforces.com/problemset/problem/50/A */

#include <iostream>

using namespace std;

int main()
{
    int m, n, dominos = 0;
    cin >> m >> n;

    for (int i=0; i<m; i++) dominos += n/2;

    if (n%2 == 1) dominos += m/2;

    cout << dominos << endl;;
}