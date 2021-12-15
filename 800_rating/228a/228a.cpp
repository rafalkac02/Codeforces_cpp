/* Link to the problem: 
https://codeforces.com/problemset/problem/228/A */

#include <iostream>

using namespace std;

int main()
{
    int shoes[4];
    int n = 0;

    for(int i=0; i<4; i++)
    {
        bool distinct = true;
        cin >> shoes[i];
        for(int j = 0; j<i; j++)
        {
            if(shoes[i] == shoes[j])
            {
                distinct = false;
            }
        }
        if (distinct)
        {
            n++;
        }
    }   
    cout << 4-n;

}