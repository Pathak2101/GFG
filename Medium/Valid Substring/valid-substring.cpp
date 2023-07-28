//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        
        stack<int>st;
        int cnt=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')st.push(i);
            
            else if(s[i]==')'){
                
                if( !st.empty() && s[st.top()]=='(')st.pop();
                
                else st.push(i);
                
              
            }
            
        }
        
        int curr=s.size();
        
        if(s.empty())return curr;
        
        int maxi=INT_MIN;
        
        while(!st.empty()){
            int x=st.top();
            maxi=max(maxi,(curr-x-1));
            curr=x;
            st.pop();
        }
        maxi=max(maxi,curr);
        
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends