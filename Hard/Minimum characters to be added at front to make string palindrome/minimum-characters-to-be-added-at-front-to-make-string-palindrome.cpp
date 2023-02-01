//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int eat(string s, int i, int j){

        while(i>=0){

            if(s[i]==s[j]) {

                i--; j++;

            }

            else return INT_MAX;;

        }

        return s.size()-j;

    }

 

    int minChar(string str){

        int ans=str.size()-1;

        for(int i=0; i<str.size()/2; i++){

            if(str[0]==str[2*i]) ans=min(ans, eat(str,i,i));

            if(str[0]==str[2*i+1] && str[i]==str[i+1]) ans=min(ans, eat(str,i,i+1));

        }

        return ans;

    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends