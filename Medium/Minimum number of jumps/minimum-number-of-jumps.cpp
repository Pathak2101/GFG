//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(arr[0]==0 && n>1) return -1;
        if(n==1) return 0;
        int far = 0;
        int curr = 0;
        int jump = 0;
        
        for(int i = 0; i<n-1; i++){
            far = max(far,i+arr[i]);
            if(i==curr){
                jump++;
                curr=far;
            }
            
        }
        
        if(curr<n-1) return -1;
        return jump;
    
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends