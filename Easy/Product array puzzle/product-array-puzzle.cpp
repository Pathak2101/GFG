//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
     vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {

       

        //code here  

        vector<long long int> vec;

        long long int  sum=1 ;

        long long int ans =1;

        int count=0;

        for(int i=0; i<n ; i++)

        {

            if(nums[i]!=0)

            {

                sum = sum * nums[i];

            }

            

            else {

                

                count++;

            }

        }

        

        

        for(int i=0; i<n ;i++)

        {

            if(count>=2)

            {

                vec.push_back(0);

            }

            

            else {

                

            if(nums[i]==0)

            {

                ans = sum ; 

            }

            

            else {

                

                if(count==1)

                {

                    ans = 0 ;

                }

                

                else

                {

                    

               ans = sum/nums[i];

               

                }

            }

            vec.push_back(ans);

         }

        }

        return vec;

    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends