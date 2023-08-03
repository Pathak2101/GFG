//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    // APPROACH: Maintain a frequency map and 
    //then run loop on the string with checking
    //if the character is repeated.
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
      unordered_map<char,int> freq; // Maintain a map for frequency of characters
      
      for(int i=0;i<S.size();i++){ 
          freq[S[i]]++; // Add to character frequency 
      }
      
      // Now loop through, return the first character with 1 frequency in the freq map
      for(int i=0;i<S.size();i++){
          if(freq[S[i]] == 1){
              return S[i];
          }
      }
      
      // If no found with 1 frequency return $
     return '$';  
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends