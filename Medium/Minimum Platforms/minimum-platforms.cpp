//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
      //sort both arivel time and departure time
        sort(arr, arr+n);
        sort(dep, dep+n);
        
        //initialize two variables 1 for counting time of arivel and 
        //2nd for maximum of count
        
        int count = 0;
        int ans = 0;
        
        //maintain two pointer;
        int i = 0; //for arrivel time
        int j = 0; //for departure time
        
        while(i < n)//checking for only arrival time
        {
            if(arr[i] <= dep[j])//arrival time < departure time
            {
                count++; //increment count
                ans = max(ans, count); // inrement ans with maximum num
                i++; // arrival time ++ i.e next arrival time or next time
            }
            else if(arr[i] > dep[j]) // while traversing from left to right
                                    // if in betn departure time occure, do count--
            {
                count--;
                j++; // departure time pluS pluS
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends