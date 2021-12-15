/* Link to the problem: 
https://codeforces.com/problemset/problem/71/A */

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string word;
        cin >> word;
        int len = word.length();

        if(len > 10)
        {
            cout << word[0] << len - 2 << word[len - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
}