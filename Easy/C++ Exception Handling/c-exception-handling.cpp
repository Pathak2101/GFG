//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxValue(int A, int B){
        // code here
         float b = 0;

        long long a,c,d;

        a=c=d=0;

        a = A*B;

        if(B==0)

        {

               return -999999;

        }

        else

        {

            b = A/B;

        }

        c = A-B;

        d = A+B;

        if(a>b&&a>c&&a>d)

        {

            return a;

        }

        

        else if(b>a&&b>c&&b>d)

        {

            return b;

        }

        

        else if(c>a&&c>b&&c>d)

        {

            return c;

        }

        

        else if(d>a&&d>b&&d>c)

        {

            return d;

        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B;
        cin>>A>>B;
        
        Solution ob;
        int ans = ob.maxValue(A,B);
        if(ans == -999999)
            cout<<"inf\n";
        else
            cout<<ans<<"\n";
    }
    return 0;
}
// } Driver Code Ends