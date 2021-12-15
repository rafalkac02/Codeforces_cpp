/* Link to the problem: 
https://codeforces.com/problemset/problem/268/A */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int h[n], a[n], problems = 0;
    
    for(int i=0; i<n; i++)
    {
        cin >> h[i] >> a[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(h[i]==a[j]) problems++;
            if(h[j]==a[i]) problems++;
        }
    }
    cout << problems;
}