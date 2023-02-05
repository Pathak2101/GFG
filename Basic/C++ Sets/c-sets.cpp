//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    vector<set<int>> setOperations(set<int> A, set<int> B){
        // code here
          vector<set<int>> answer ;

        set<int> s ;

        

        s.insert(A.begin() , A.end()) ;

        s.insert(B.begin() , B.end()) ;

        

        answer.push_back(s) ;

        // union

        

        s.clear() ;

        

        // difference

        for(auto i : A)

        {

            auto it = B.find(i) ;

            

            if(it == B.end())

                s.insert(i) ;

        }

        

        if(s.empty())

            s.insert(0) ;

        

        answer.push_back(s) ;

        // difference

        

        s.clear() ;

        

        // intersection

        for(auto i : A)

        {

            auto it = B.find(i) ;

            

            if(it != B.end())

                s.insert(i) ;

        }

        

        if(s.empty())

            s.insert(0) ;

        

        answer.push_back(s) ;

        // intersection

        

        return answer ;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        set<int> A, B;
        int x;
        for(int i = 0;i < N;i++){
            cin>>x;
            A.insert(x);
        }
        for(int i = 0;i < M;i++){
            cin>>x;
            B.insert(x);
        }
        
        Solution ob;
        vector<set<int>> result = ob.setOperations(A, B);
        for(int i = 0;i < 3;i++){
            for(auto &it: result[i])
                cout<<it<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends