/* Link to the problem: 
https://codeforces.com/problemset/problem/520/A */

#include <iostream>
#include <cctype>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set <char> l;

    for(int i=0; i<s.length(); i++)
    {
        char x=s[i];
        if((x >= 'a' && x <= 'z') || (x >= 'A' && x <='Z'))
        {
            l.insert(tolower(x));
        }
    }

    if (l.size() == 26) cout << "YES";
    else cout << "NO";
}