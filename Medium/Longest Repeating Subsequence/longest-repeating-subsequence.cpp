//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n = str.length();
		    //step1:-
		    //vector<vector<int> > dp(n+1,vector<int> (n+1,0));
		    vector<int> curr(n+1,0);
		    vector<int> next(n+1,0);
		    for(int i=str.length()-1;i>=0;i--){
		        for(int j=str.length()-1;j>=0;j--){
		            int ans = 0;
		            if(str[i] == str[j] && i != j)
		                ans = 1 + next[j+1];
		            else 
		                ans = max(curr[j+1],next[j]);
		            curr[j] = ans;
		        }
		        next = curr;
		    }
		    return next[0];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends