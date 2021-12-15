/* Link to the problem: 
https://codeforces.com/problemset/problem/61/A */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    
    //error checking
    if (a.length() != b.length())
    {
        cout << "Error. Please provide two strings of the same length.\n";
        return 1;
    }

    int len = a.length();
    string output = "";

    for(int i=0; i<len; i++)
    {
        if (a[i] == b[i])
        {
            output += '0';
        }
        else
        {
            output += '1';
        }
    }

    cout << output;
}