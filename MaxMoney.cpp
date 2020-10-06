//A problem to find the max money that can be robbed from a street of 'N' houses with 'K' money per house such that no adjacent houses can be robbed
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maximizeMoney(int N , int K) {
       
        int maxMoney;
        if(N == 1){
            return N*K;
        }
        else{
            
            maxMoney = ceil(float(N)/2)*K;   //Ex: N=5 => 3 max houses;ceil(5.0/2)=3; then 3 * K
        }
        return maxMoney;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;

        cin>>N>>K;

        Solution ob;
        cout << ob.maximizeMoney(N,K) << endl;
    }
    return 0;
}  
