/* Link to the problem: 
https://codeforces.com/problemset/problem/703/A */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mishka=0, chris=0;

    for (int i=0; i<n; i++)
    {
        int m, c;
        cin >> m >> c;

        if (m>c) mishka++;
        if (c>m) chris++;
    }

    if (mishka > chris) cout << "Mishka";
    else if (mishka < chris) cout << "Chris";
    else cout << "Friendship is magic!^^";
}