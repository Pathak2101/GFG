//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int N=nums.size();

     vector<pair<int,int>> ans(N);

     for(int i=0;i<nums.size();i++){

         ans[i]={nums[i],i};

     }

     sort(ans.begin(),ans.end());

     int swaps =0;

     for(int i=0;i<nums.size();i++){

         if(ans[i].second==i){

             continue;

         }

         else{

             swaps++;

             swap(ans[i],ans[ans[i].second]);

             i--;

         }

     }

     return swaps;

 }
	
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends