/* Link to the problem: 
https://codeforces.com/problemset/problem/443/A */

#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    set <char> letters;
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <='z')
        {
            letters.insert(s[i]);
        }
    }
    cout << letters.size();
}