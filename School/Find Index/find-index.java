//{ Driver Code Starts
//Initial Template for Java


import java.util.*;
import java.lang.*;
import java.io.*;




class Array
 {
	public static void main (String[] args)
	 {
	 Scanner sc=new Scanner(System.in);
	 int t=sc.nextInt();
	 while(t-->0)
	    {
	    int n = sc.nextInt();
		    int arr[] = new int[n];
		    for(int i=0;i<n;i++)
		    {
		        arr[i] = sc.nextInt();
		    }
		    int key = sc.nextInt();
		    Solution ob=new Solution();
		    int ar[]=ob.findIndex(arr,n,key);
		    System.out.println(ar[0]+" "+ar[1]);
		}
	}
}
// } Driver Code Ends


//User function Template for Java

class Solution
{ 
    // Function to find starting and end index 
    static int[] findIndex(int a[], int N, int key) 
    { 
        //code here.
        int z=0;
        ArrayList<Integer> x=new ArrayList<>();
        for(int i=0;i<N;i++){
            if(a[i]==key){
                x.add(i);
            }
        }
        Collections.sort(x);
        int []c=new int[2];
        if(x.size()==0){
            c[0]=-1;
            c[1]=-1;
            return c;
        }
        c[0]=x.get(0);
        c[1]=x.get(x.size()-1);
        return c;
        
    }
}