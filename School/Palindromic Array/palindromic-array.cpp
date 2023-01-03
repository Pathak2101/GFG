//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
    private:
    int checkpali(int num)
    {
        int original=num;
        int temp=0;
        
        while(num>0){
            int r=num%10;
            temp=temp*10+r;
            num=num/10;
        }
        
        if(temp==original){
            return 1;
            
        }
        else{
            return 0;
        }
    }
    
    
    
    
    
    
    
    
    
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++)
    	{
    	    int check=checkpali(a[i]);
    	    if(check==0)
    	    return 0;
    	}
    	return 1;
    	
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends