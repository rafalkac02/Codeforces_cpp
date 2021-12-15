/* Link to the problem: 
https://codeforces.com/problemset/problem/734/A */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a=0, d=0;

    for (int i=0; i<s.length(); i++)
    {
        if(s[i] == 'A')
        {
            a++;
        }

        if(s[i] == 'D')
        {
            d++;
        }

    }

    if (a>d)
    {
        cout << "Anton\n";
    }
    else if (a<d)
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }
    
}