/* Link to the problem: 
https://codeforces.com/problemset/problem/271/A */

#include <iostream>
#include <string>

using namespace std;

bool distinct(int year)
{
    string s = to_string(year);
    int len = s.length();

    for (int i=0; i<len-1; i++)
    {
        for (int j = i+1; j<len; j++)
        {
            if(s[i]==s[j]) return false;
        }
    }
    return true;
}

int main()
{
    int y;
    cin >> y;
    y++;

    while (distinct(y) == false)
    {
        y++;
    }

    cout << y << endl;
}