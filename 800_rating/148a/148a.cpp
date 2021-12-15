/* Link to the problem: 
https://codeforces.com/problemset/problem/148/A

Every k-th dragon got punched in the face with a frying pan. Every l-th dragon got his tail shut into the balcony door. 
Every m-th dragon got his paws trampled with sharp heels. Finally, she threatened every n-th dragon to call her mom, and he withdrew in panic.

How many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of d dragons?*/

#include <iostream>

using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int damaged = 0;

    for(int i=1; i<=d; i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            damaged++;
        }
    }
    cout << damaged;
}