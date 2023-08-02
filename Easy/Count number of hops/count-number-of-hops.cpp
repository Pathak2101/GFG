//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    long long t[100001];
    long long m=1e9+7;
    Solution(){
        memset(t,-1,sizeof(t));
    }
    
        long long countWays(int n)
    {
        if(n==0)    return 1;
        if(t[n]!=-1)    return t[n];
        if(n>=3)
            return t[n]=(countWays(n-1)+countWays(n-2)+countWays(n-3))%m;
        else if(n==2)
            return t[n]=(countWays(n-1)+countWays(n-2))%m;
        else
            return t[n]=countWays(n-1)%m;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends