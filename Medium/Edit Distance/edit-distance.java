//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while (T-- > 0) {
            String s1 = br.readLine();
            String[] S = s1.split(" ");
            String s = S[0];
            String t = S[1];
            Solution ob = new Solution();
            int ans = ob.editDistance(s, t);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


class Solution {
     int f(int i,int j,String s,String t,int[][] dp){
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s.charAt(i)==t.charAt(j)){
            //match
            return dp[i][j]=0+f(i-1,j-1,s,t,dp);
        }
        else{
            //insert
            int case1=1+f(i-1,j,s,t,dp);
            //delete
            int case2=1+f(i,j-1,s,t,dp);
            //replace
            int case3=1+f(i-1,j-1,s,t,dp);
            
            return dp[i][j]=Math.min(case1,Math.min(case2,case3));
        }
    }
    public int editDistance(String s, String t) {
        // Code here
        int n=s.length();
        int m=t.length();
        int[][] dp=new int[n][m];
        for(int[] item:dp){
            Arrays.fill(item,-1);
        }
        return f(n-1,m-1,s,t,dp);
    }
}