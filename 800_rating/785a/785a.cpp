/* Link to the problem: 
https://codeforces.com/problemset/problem/510/A */

/*Tetrahedron - 4 triangular faces.
Cube - 6 square faces.
Octahedron - 8 triangular faces.
Dodecahedron - 12 pentagonal faces.
Icosahedron - 20 triangular faces.*/

#include <iostream>
using namespace std;

int faces(char s)
{
    if (toupper(s) == 'T') return 4;
    if (toupper(s) == 'C') return 6;
    if (toupper(s) == 'O') return 8;
    if (toupper(s) == 'D') return 12;
    if (toupper(s) == 'I') return 20;
}

int main()
{
    int n;
    cin >> n;
    int f = 0;

    for (int i=0; i<n; i++)
    {
        string p;
        cin >> p;
        f += faces(p[0]);
    }
    cout << f;
}