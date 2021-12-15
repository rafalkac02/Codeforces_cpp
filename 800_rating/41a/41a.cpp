/* Link to the problem: 
https://codeforces.com/problemset/problem/41/A */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    bool reverse = true;
    
    if (s.length() == t.length())
    {
        int len = s.length(); 
        for (int i=0; i<len; i++)
        {
            if(s[i] != t[len-1-i])
            {
                reverse = false;
                break;
            }
        }
    }
    else reverse = false;

    if (reverse) cout << "YES";
    else cout << "NO";
}