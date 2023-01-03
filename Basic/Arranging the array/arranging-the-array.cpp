//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
      
        Rearrange( arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends




void Rearrange(int arr[], int n)
{
    // Your code goes here
     int l=0;

   int a[n];

   for(int i=0;i<n;i++){

       if(arr[i]<0){

           a[l]=arr[i];

           l++;

       }

   }

   for(int i=0;i<n;i++){

       if(arr[i]>=0){

           a[l]=arr[i];

           l++;

       }

   }

   for(int i=0;i<n;i++){

       arr[i]=a[i];

   }

 
}