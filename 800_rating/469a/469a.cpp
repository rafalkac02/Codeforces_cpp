/* Link to the problem: 
https://codeforces.com/problemset/problem/469/A */

#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    set <int> levels;

    int p;
    cin >> p;
    for(int i=0; i<p; i++)
    {
        int number;
        cin >> number;
        levels.insert(number);
    }
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int number;
        cin >> number;
        levels.insert(number);
    }
    
    if (levels.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}