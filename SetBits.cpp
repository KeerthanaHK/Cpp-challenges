//Program to find the number of 1's in binary representation of a number
#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    int count=0;
    int setBits(int N)
    {   
        while(N != 0){
            N=N&(N-1);  //& operation takes place with the binary forms of these 2 numbers
            count++;
        }
     return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  
