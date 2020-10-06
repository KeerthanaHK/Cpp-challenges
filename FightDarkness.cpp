#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int maxDays(int arr[],int n){
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i] >= max){
                max=arr[i];
            }
        }
        return max;
    }
};

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout << ob.maxDays(arr, n) << "\n";
    }
    return 0;
} 
