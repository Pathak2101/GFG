//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main(String[] args) throws IOException
	{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while(t-->0)
        {
            String str = br.readLine();
            
            Solution obj = new Solution();
            System.out.println(obj.findSubString(str));
            
        }
	}
}


// } Driver Code Ends


//User function Template for Java

class Solution {
    public int findSubString( String str) {
        // Your code goes here
          HashMap<Character,Integer>map=new HashMap<>();
        int n=str.length();
        int i=0;
        int j=0;
        int minLen=Integer.MAX_VALUE;
        for(int k=0;k<n;k++){
            map.put(str.charAt(k),map.getOrDefault(str.charAt(k),0)+1);
        }
        int count=map.size();
        
        HashMap<Character,Integer>sap=new HashMap<>();
        while(j<n){
            sap.put(str.charAt(j),sap.getOrDefault(str.charAt(j),0)+1);
            if(count==sap.size()){
               while(sap.get(str.charAt(i))>1){
                   sap.put(str.charAt(i),sap.get(str.charAt(i))-1);
                   //System.out.println(sap.get(str.charAt(i))+" ");
                   i++;
               }
               minLen=Math.min(minLen,j-i+1);
            }
            j++;
        }
        return minLen;
    }
}