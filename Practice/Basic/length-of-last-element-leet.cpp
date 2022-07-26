/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int lengthOfLastWord(string s) {
        int sum=0;
        int j=s.length();
        for(int i=j-1;i>=0;i--)
        {
            if(s[i]==' ') j--;
            else break;
        }
        for(int i=j-1;i>=0;i--)
        {
            if(s[i]!=' ') sum++;
            else break;
        }
        return sum;
    }
int main()
{
    
    
    string s = "day     ";
    
    cout << lengthOfLastWord(s);

    return 0;
}
