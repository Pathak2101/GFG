//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int low = 0, index = 0,  high = n-1;
        int ans = INT_MAX;
        int mid;

        
        
        while(low<=high){
            mid = (low + high )/2;
            
            if(arr[low]<=arr[high]){
                if(arr[low]<ans){
                    ans = arr[low];
                    index = low;
                }
                break;
            }
            
            //it means left half is sorted
            if(arr[low]<=arr[mid]){
                if(arr[low]<ans){
                    ans = arr[low];
                    index = low;
                }
                
                //as it is sorted array so the smallest element is at the first
                //now search the right half
                low = mid+1;
               
            }
            else{
                if(arr[mid]<ans){
                    ans = arr[mid];
                    index = mid;
                }
                
                //similarly search the left half
                high = mid-1;
                
            }
        }
        return index;

// as the index will have the smallest element and the index of the smallest element of the array will give the no of rotation
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends