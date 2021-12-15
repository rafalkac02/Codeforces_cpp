/* Link to the problem: 
https://codeforces.com/problemset/problem/236/A */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    int len = input.length();

    string chars= "";

    for(int i=0; i<len; i++)
    {
        // if letter already in the chars - 1, if not - 0
        int ifany = 0;

        for(int j=0; j<chars.length(); j++)
        {
            if(chars[j] == input[i])
            {
                ifany = 1;
                break;
            }
        }

        if(ifany == 0)
        {
            chars += input[i];   
        }
    }

    if((chars.length()%2) == 0) 
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;    
    }
}