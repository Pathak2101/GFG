//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
    private:
    int solve(int lo,int hi,int arr[],int target,int n)
    {
        // base case
        if(lo>hi) return -1;
        int mid=(lo+hi)/2;
        
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target)
        {
           return solve(mid+1,hi,arr,target,n);
        }
        else
        return solve(lo,mid-1,arr,target,n);
    }
  public:
    int binarysearch(int arr[], int n, int k) 
    {
        // using recursion
    
        return solve(0,n-1,arr,k,n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends