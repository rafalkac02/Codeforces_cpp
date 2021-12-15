/* Link to the problem: 
https://codeforces.com/problemset/problem/581/A */

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int min;

    if(a<=b) min = a;
    else min = b;

    int same;
    same = (a+b-2*min)/2;
    cout << min << " " << same;
}