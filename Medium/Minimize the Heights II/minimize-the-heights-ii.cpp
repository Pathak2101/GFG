//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {

        sort(arr,arr+n);

        if(n==1){

            return 0;

        }

        int mini = arr[0];

        int maxi = arr[n-1];

        

        // find diff.

        int ans = (maxi) - (mini);

        

        // traverse and check minium and max.

        for(int i=1; i<n; i++){

            mini = min(arr[i]-k, arr[0]+k);

            maxi = max(arr[i-1]+k, arr[n-1]-k);

        

        // check ki array size 0 se kam to nahi hai.   

        if(arr[i]-k <0)

           continue;

         

        //  minimum difference.

        ans = min(ans,maxi-mini);

        }

        return ans;

        

    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends