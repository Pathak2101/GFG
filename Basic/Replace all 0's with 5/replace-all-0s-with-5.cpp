//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int ans = 0;
    while(n!=0){
        int k = n%10;
        if(k == 0){
            ans = ans*10 + 5 ; 
        }
        else ans = ans*10 + k;
        n = n/10;
    }
    int mans = 0;
    while(ans!=0){
        int k = ans%10;
        mans = mans*10 + k;
        ans/=10;
    }
    return mans;
}