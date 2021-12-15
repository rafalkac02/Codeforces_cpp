/* Link to the problem: 
https://codeforces.com/problemset/problem/705/A */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s ="I hate that";
    
    if(n==1)
    {
        s = "I hate it";
    }
    else
    {
        for(int i=1; i<n; i++)
        {
            if (i%2==0 && i!=n-1)
            {
                s += " I hate that";
            }
            else if (i%2==1 && i!=n-1)
            {
                s += " I love that";
            }
            else if (i%2==0 && i==n-1)
            {
                s += " I hate it";
            }
            else
            {
                s += " I love it";
            }
        }
    }
    cout << s;
}