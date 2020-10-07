//A program to find the max element in the bitonic array
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int max= arr[0];
	    for(int i=0;i<n;i++){
	        if(arr[i] > max){
	            max = arr[i];
	        }
	        
	    }
	    return max;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
