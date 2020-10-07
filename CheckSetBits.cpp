//A program to check whether all bits are set
#include<bits/stdc++.h> 
using namespace std;
 
class Solution{
public:
    int isBitSet(int N){
        if (N == 0) 
        return 0; 
  
    // loop till n becomes '0' 
    while (N > 0) 
    { 
        // if the last bit is not set 
        if ((N & 1) == 0) 
            return 0; 
  
        // right shift 'n' by 1 
        N = N >> 1; 
    } 
  
    // all bits are set 
    return 1;
    }
};


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isBitSet(N) << endl;
    }
    return 0; 
} 
