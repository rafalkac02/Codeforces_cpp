/* Link to the problem: 
https://codeforces.com/problemset/problem/339/A */

#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    string calc;
    cin >> calc;
    int l = calc.length();

    int ones = 0, twos = 0, threes = 0;

    for(int i=0; i<l; i++)
    {
        if(calc[i]=='1')
        {
            ones++;
        }
        if(calc[i]=='2')
        {
            twos++;
        }
        if(calc[i]=='3')
        {
            threes++;
        }
    }

    int digits = ones + twos + threes;
    int counter = 0;

    for(int i=0; i<ones; i++) 
    {
        counter++;
        if(i == ones-1 && counter == digits) {
            cout << "1";
        }
        else {
            cout << "1+";
        }
    }

    for(int i=0; i<twos; i++) 
    {
        counter++;
        if(i == twos-1 && counter == digits) {
            cout << "2";
        }
        else {
            cout << "2+";
        }
    }

    for(int i=0; i<threes; i++) 
    {
        counter++;
        if(i == threes-1 && counter == digits) {
            cout << "3";
        }
        else {
            cout << "3+";
        }
    }
}