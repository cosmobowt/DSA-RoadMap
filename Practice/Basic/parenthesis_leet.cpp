/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stack>

using namespace std;

int Convertor(string s){
    
    stack <char> stk;
    int n = s.size();
    
    for (int i = 0; i < n; i++){
        
        if ((s[i] == '(') || (s[i] == '{') || (s[i] == '[')){
            stk.push(s[i]);
        }
        
        else{
            
            if (s[i] == ')'){
                
                if (stk.empty() || stk.top() != '('){
                    return false;
                }
                
                else{
                    stk.pop();
                }
            }
            
            if (s[i] == ']'){
                
                if (stk.empty() || stk.top() != '['){
                    return false;
                }
                
                else{
                    stk.pop();
                }
            }
            
            
            if (s[i] == '}'){
                
                if (stk.empty() || stk.top() != '{'){
                    return false;
                }
                
                else{
                    stk.pop();
                }
            }
            
        }
        
        
    }
    
    
    if (!stk.empty()){
        return false;
    }
    
    else{
        return true;
    }
    
    
};

int main()
{
    
    string s;
    
    cin >> s;
    
    cout << Convertor(s) << endl;

    return 0;
}
