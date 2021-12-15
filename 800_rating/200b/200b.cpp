/* Link to the problem: 
https://codeforces.com/problemset/problem/200/B */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    
    for(int i=0; i<n; i++)
    {
        int p;
        cin >> p;
        sum += p;
    }
    double avg = double(sum)/double(n);
    cout << avg;
}