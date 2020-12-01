// A cpp program to find the missing number in an array
//Here I did: MissingNum = ActualSum - PresentSum


#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array, int n);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];

        cout << MissingNumber(array, n) << "\n";
    }
    return 0;
} 


int MissingNumber(vector<int>& array, int n) {
    
    int Asum=0;
    int Psum=0;
    
    
    for(int j=0;j<n-1;j++){
        Psum = Psum + array[j]; 
    }
    
    for(int i=0;i<=n;i++){
    
        Asum = Asum + i;    
    
    }
    return Asum-Psum;      
}
