//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
             // base case

     if(n==1){

         return "1";

     }

     if(n==2){

         return "11";

     }

     string result=lookandsay(n-1);

     result=result+'@';string temp="";int count=1;

     for(int i=1; i<result.size(); i++){

         if(result[i]!=result[i-1]){

             temp=temp+to_string(count);

             temp=temp+result[i-1];

             count=1;

         }

         else{

             count++;

         }

     }

    return temp;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends