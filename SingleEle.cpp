// A program to find a single element in the array where other elements are repeated
#include <bits/stdc++.h>

using namespace std;


public:	
	int search(int A[], int N){
	    int res = A[0]; 
        for (int i = 1; i < N; i++) 
            res = res ^ A[i];  //XORing every elements results in single element also xor of same 2 numbers is zero
  //ex: 7^6^6^2^2^1^1=7
        return res;
	    
	}
};

int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
