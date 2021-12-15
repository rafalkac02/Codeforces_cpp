/* Link to the problem: 
https://codeforces.com/problemset/problem/266/A */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int len;
    string input;
    cin >> len >> input;
    int counter = 0;

    for(int i=0; i<len-1; i++) {
        if(input[i] == input[i+1]) {
            counter++;
        }
    }
    cout << counter << endl;
}