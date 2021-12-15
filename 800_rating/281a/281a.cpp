/* Link to the problem: 
https://codeforces.com/problemset/problem/281/A */

#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    string output = "";
    output += toupper(input[0]);
    for(int i = 1; i<input.length(); i++)
    {
        output += input[i];
    }
    cout << output;
}