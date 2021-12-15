/* Link to the problem: 
https://codeforces.com/problemset/problem/112/A */

#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int i1 = 0;
    int i2 = 0;
    int len1 = s1.length();
    int len2 = s2.length();

    for(int i=0; i<len1; i++)
    {
        i1 += int(s1[i]);
    }

    for(int i=0; i<len2; i++)
    {
        i2 += int(s2[i]);
    }

    if(i1<i2) {
        cout << -1 << endl;
    }
    else if(i1>i2) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }

}