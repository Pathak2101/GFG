//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
   string helper(string s) {
    int n = s.length();
    int i = 0;

    while (i < n) {
        int j = i + 1;
        while (j < n && s[j] == s[i])
            j++;

        if (j - i > 1) {
            // Found 
            s.erase(i, j - i);
            
            n = s.length(); // length update
            
        } else {
            i++;
        }
    }

    return s;
}

    string rremove(string s){
        // code here
        string ans=helper(s);
        if (ans.empty() || ans == s) {
            return ans;
        }
        return rremove(ans);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends