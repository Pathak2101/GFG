//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            String input[] = read.readLine().trim().split(" ");
            int n = Integer.parseInt(input[0]);
            int m = Integer.parseInt(input[1]);
            
            String S1 = read.readLine().trim();
            String S2 = read.readLine().trim();

            Solution ob = new Solution();
            System.out.println(ob.longestCommonSubstr(S1, S2, n, m));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    int longestCommonSubstr(String s1, String s2, int n, int m){
       String ans="";
     int maxl=0;
    if(s1.equals(s2)) {
    return s1.length();}
    for(int i=0;i<s1.length();i++) {
    ans="";
    for(int j=i;j<s1.length();j++) {
 
    ans=ans+s1.substring(j,j+1);
    if(s2.contains(ans)) {
    maxl=Math.max(maxl, ans.length());
            }
        }
 
    }
    return maxl;
 }
}