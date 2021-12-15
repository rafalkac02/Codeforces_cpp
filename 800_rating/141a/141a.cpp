/* Link to the problem: 
https://codeforces.com/problemset/problem/141/A */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a, b, s1;
    cin >> a >> b >> s1;
    string s2 = a + b;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}