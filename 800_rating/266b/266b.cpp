/* Link to the problem: 
https://codeforces.com/problemset/problem/266/B */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    int len = s.length();

    for(int i=0; i<t; i++)
    {
        for(int j=0; j<len-1; j++)
        {
            //if boy ahead of girl - swap
            if(s[j] == 'B' && s[j+1] == 'G')
            {
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                j++;
            }
        }
    }
    cout << s;
}