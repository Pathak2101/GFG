//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int solve(int coins[],int index,int V,vector<vector<int>>&dp){
        if(index==0){
            if(V%coins[0]==0) return V/coins[index];
            else return 1e9;
        }
       
        if(dp[index][V]!=-1) return dp[index][V];
        int nottake=0 + solve(coins,index-1,V,dp);
        int take=INT_MAX;
        if(coins[index]<=V) take=1+ solve(coins,index,V-coins[index],dp);
        return dp[index][V]=min(take,nottake);
    }
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<int>> dp(M,vector<int>(V+1,-1));
        int index=M-1;
        int ans=solve(coins,index,V,dp);
        if(ans>=1e9) return -1;
        return ans;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends