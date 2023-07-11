//{ Driver Code Starts
import java.io.*;
import java.util.*;

  public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine());
        while (tc-- > 0) {
            int n = Integer.parseInt(br.readLine());
            int[] arr = new int[n];
            String[] inputLine = br.readLine().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            System.out.println(new Solution().maxProduct(arr, n));
        }
    }
}

// } Driver Code Ends


class Solution {
    // Function to find maximum product subarray
    long maxProduct(int[] arr, int n) {
        // code here
           long leftproduct =1;
      long rightproduct=1;
      long ans= arr[0];
      for(int i=0;i<n;i++)
      {
          leftproduct= leftproduct==0?1:leftproduct;
         
          rightproduct=rightproduct==0?1:rightproduct;
          
          leftproduct*=arr[i];
          rightproduct*= arr[n-1-i];
          ans= Math.max(ans,Math.max(leftproduct,rightproduct));
    }
     return ans;
    }
}