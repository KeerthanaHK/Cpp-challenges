// A program to find the difference between the bits between two numbers to make them equal
#include <iostream>
using namespace std;
// Count number of bits to be flipped 
// to convert A into B 

// Function that count set bits 
int countSetBits(int n) 
{ 
	int count = 0; 
	while (n > 0) 
	{ 
		count++; 
		n &= (n-1); 
	} 
	return count; 
} 

// Function that return count of 
// flipped number 
int FlippedCount(int a, int b) 
{ 
	// Return count of set bits in 
	// a XOR b 
	return countSetBits(a^b); 
} 

// Driver code 
int main() 
{ 
	int a,b,t;
	cin>>t;
	while (t--){
	cin>>a>>b; 
	cout << FlippedCount(a, b)<<endl;
	}
	return 0; 
} 
