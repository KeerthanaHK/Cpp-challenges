//Given maximum area of right angled triangle; We need to find length of hypotenuse
#include <bits/stdc++.h>
using namespace std;




class Solution {
  public:
    int getHypotenuse(long long N) {
        // code here
        return floor(2*sqrt(N));
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;

        cin>>N;

        Solution ob;
        cout << ob.getHypotenuse(N) << endl;
    }
    return 0;
}
