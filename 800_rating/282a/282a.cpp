/* Link to the problem: 
https://codeforces.com/problemset/problem/282/A */

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;

    for(int i=0; i<n; i++)
    {
        string v;
        cin >> v;

        if(v[1] == '+')
        {
            x += 1;
        }
        
        if(v[1] == '-')
        {
            x -= 1;
        }
    }

    cout << x;
}