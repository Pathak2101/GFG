//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int fib(int n,vector<int>&dp){
    
     if(n<=1){
         return n;
     }
      int m = 1000000007;
     
     if(dp[n]!=-1){
         return dp[n];
     }     dp[n] = (fib(n-1,dp)%m+fib(n-2,dp)%m)%m;
     return dp[n];
  }
  
    int nthFibonacci(int n){
      
      vector<int>dp(n+1,-1);

     return fib(n,dp); 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends