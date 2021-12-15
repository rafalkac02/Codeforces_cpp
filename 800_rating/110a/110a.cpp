/* Link to the problem: 
https://codeforces.com/problemset/problem/110/A */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int lucky = 0;

    for(int i=0; i<n.length(); i++)
    {
        if(n[i] == '4' || n[i] == '7')
        {
            lucky++;
        }
    }
    
    if(lucky==4 || lucky==7)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}