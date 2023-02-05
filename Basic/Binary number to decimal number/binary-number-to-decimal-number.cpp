//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
         int number = 0;

        long int binary = 0;

        int reminder = 0;

        int power = 0;

        

        for(int i=0; i < str.length(); i++) // string to int

        {

            binary = binary *10 + (str[i] - '0'); // -'0' to get digit value

        }

        

        while(binary != 0)  // binary to decimal

       {

           reminder = binary %10;

           binary = binary/10;

           number = number + reminder*pow(2,power);

           power++;

       }

       

        return number ;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends