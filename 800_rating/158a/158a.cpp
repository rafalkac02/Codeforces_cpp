/* Link to the problem: 
https://codeforces.com/problemset/problem/158/A */

#include <iostream>

using namespace std;

int main()
{
    // n - numnber of participants
    // k - the k'th place
    int n, k;
    cin >> n >> k;

    // passed - number of people whose result is: 1. bigger or equal to k_value; 2. positive
    int passed = 0;
    int scores[n-1];

    for (int i=0; i<n; i++)
    {
        cin >> scores[i];
    }

    // value of k
    int k_value = scores[k-1];

    for (int i=0; i<n; i++)
    {
        if(scores[i]>=k_value && scores[i]>0)
        {
            passed++;
        }
    }
    cout << passed;
}