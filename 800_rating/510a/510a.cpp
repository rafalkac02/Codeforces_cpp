/* Link to the problem: 
https://codeforces.com/problemset/problem/510/A */

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        if (i%2 == 0)
        {
            for (int j=0; j<m; j++)
            {
                cout << '#';
            }
            cout << endl;
        }
        else if (i%4 == 1)
        {
            for (int j=1; j<m; j++)
            {
                cout << '.';
            }
            cout << "#\n";            
        }
        else
        {
            cout << '#';
            for (int j=1; j<m; j++)
            {
                cout << '.';
            }
            cout << endl;
        }
    }
}