/* Link to the problem: 
https://codeforces.com/problemset/problem/116/A */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cap = 0, in=0;

    for (int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        in += -a+b;

        if(in>cap)
        {
            cap = in;
        }
    }
    cout << cap;
}