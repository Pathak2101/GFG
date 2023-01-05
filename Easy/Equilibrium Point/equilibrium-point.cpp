//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
            if(n==1)

        return 1;

        int sum1=a[0],sum2=a[n-1];

          for(int i=1,j=n-2;i<=j;)

          {

              if(sum1==sum2 && i==j)

              {

                  return i+1;

              }

              if(sum1==sum2 && i!=j)

              {

                  sum1=sum1+a[i];

                  sum2=sum2+a[j];

                  i++;

                  j--;

              }

              else if(sum1>sum2)

              {

                  sum2=sum2+a[j];

                  j--;

              }

              else if(sum1<sum2)

              {

                  sum1=sum1+a[i];

                  i++;

              }

          }

          

          return -1;

    
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends