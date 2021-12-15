/* Link to the problem: 
https://codeforces.com/problemset/problem/59/A */

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string word;
    cin >> word;

    int len = word.length();
    int low = 0, up = 0;

    for(int i=0; i< len; i++)
    {
        if (isupper(word[i]))
        {
            up++;
        }
        if (islower(word[i]))
        {
            low++;
        }
    }

    if (low >= up)
    {
        for(int i=0; i< len; i++)
        {
            word[i] = tolower(word[i]);
        }
    }
    else
    {
        for(int i=0; i< len; i++)
        {
            word[i] = toupper(word[i]);
        }
    }

    cout << word;
}