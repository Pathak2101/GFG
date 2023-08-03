//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        
        bool isNum(char x)
        {
            return (x>='0' && x<='9');
        }
        
        int isValid(string s) {
            
            if(s.compare("0.0.0.0")==0)
                return 1;
            string w="";
            s=s+'.';
            int n=s.length();
            
            int cnt=0;
            for(int i=0;i<n;i++)
            {   
                
                if(s[i]!='.')
                {
                    w+=s[i];
                }
                else if(s[i]=='.')
                {   
                    if(w.length()==0 && cnt==0)
                        return 0;
                    else if(w.length()==0 && cnt!=0)
                        w="0";
                    int m=w.length();
                    if(w[0]=='0' && w.length()>1)
                        return 0;
                    if(m>3)
                        return 0;
                    while(m>0)
                    {
                        if(isNum(w[m-1])==false)
                            return 0;
                        m--;
                    }
                    int n1=stoi(w);
                    if(n1>255)
                        return 0;
                    w="";
                    cnt++;
                }
            }
            if(n>16 || n<8)
                 return 0;
            return cnt==4;
            // code here
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends