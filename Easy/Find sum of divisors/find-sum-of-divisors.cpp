//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int sumOfDivisors(int N)
    {
        // Write Your Code here
        int X=1e4+5;
        vector<int> divsor[X];
        divsor[1].push_back(1);
        for(int i=2;i<X;i++){
            divsor[i].push_back(1);
            for(int j=i;j<X;j+=i){
                divsor[j].push_back(i);
            }
        }
        int cnt=0;
        for(int i=0;i<divsor[N].size();i++){
           for(int j=0;j<divsor[divsor[N][i]].size();j++){
               cnt+=divsor[divsor[N][i]][j];
           }
        }
      
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        int ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends