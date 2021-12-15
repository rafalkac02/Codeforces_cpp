/* Link to the problem: 
https://codeforces.com/problemset/problem/136/A */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int is[n];

    for (int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        is[i] = num;
    }
    
    int ps[n];
    
    for (int i = 0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (is[j] == i+1)
            {
                ps[i] = j+1;
            }
        }
    }
    
    // print result
    for (int i=0; i<n; i++)
    {
        cout << ps[i] << " ";
    }
    cout << endl;
}