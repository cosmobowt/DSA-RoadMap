      /*****************************************************************    
              
                                                  
                               Online C++ Compiler.            
               Code, Compile, Run and Debug C++ program online.               
Write your code in this editor and press "Run" button to compi le and execu t e  it.        

 ****************************************************** ** ***********/                     
                                
#include <bits/std c++.h>                  
using namespace std;                      
                            
int findRepeatingElement(int arr[], int n ){                       
    for (int i = 0; i < n; i++){                        
        for (int j = i+1; j < n; j++){             
            if (arr[i] == arr[j]){                 
                return arr[i];         
            }                 
        }              
    }     n         
       v         
        
    return 0;     
             
         
}  
        
   
int main(){ 
    
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 6, 9};   
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    int res = findRepeatingElement(arr, n);
    if (res == 0){
        cout << "No Repeating Element" << endl;
    }
    
    else{
        cout << res << endl;
    }
    
}
 
 
