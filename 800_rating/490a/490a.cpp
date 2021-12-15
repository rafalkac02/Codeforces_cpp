/* Link to the problem: 
https://codeforces.com/problemset/problem/490/A */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    // subjects[0] - programming, subjects[1] - maths, subject[2] - PE
    int subjects[3] = {0, 0, 0};
    vector <int> ones, twos, threes;

    /*ti = 1, if the i-th child is good at programming,
    ti = 2, if the i-th child is good at maths,
    ti = 3, if the i-th child is good at PE*/

    for (int i=1; i<=n; i++)
    {
        int c;
        cin >> c;
        subjects[c-1]++;
        if (c==1) ones.push_back(i);
        if (c==2) twos.push_back(i);
        if (c==3) threes.push_back(i);
    }

    sort(subjects, subjects+3);
    int teams = subjects[0];
    cout << teams << endl;

    for (int i=0; i<teams; i++)
    {
        cout << ones[i] << ' ';
        cout << twos[i] << ' ';
        cout << threes[i] << endl;
    }
}