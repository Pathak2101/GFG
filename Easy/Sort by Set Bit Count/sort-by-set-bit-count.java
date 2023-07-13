//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main(String[] args) throws IOException
	{
	        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t =
            Integer.parseInt(br.readLine().trim()); // Inputting the testcases
        while(t-->0)
        {
            int n = Integer.parseInt(br.readLine().trim());
            Integer arr[] = new Integer[(int)(n)];
            String inputLine[] = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }
            
            Compute obj = new Compute();
            obj.sortBySetBitCount(arr, n);
            StringBuilder output = new StringBuilder();
            for(int i = 0; i < n; i++)
            output.append(arr[i] + " ");
            System.out.println(output);
            
        }
	}
}


// } Driver Code Ends


//User function Template for Java

class Compute  
{ 
    static void sortBySetBitCount(Integer arr[], int n)
    { 
        // Your code goes here
        TreeMap<Integer, ArrayList<Integer>> map = new TreeMap<>();
        
        for(int i=0; i<n; i++){
            int num = arr[i], res = 0;
            
            while(num > 0){
                num = num & (num-1);
                res++;
            }
            map.computeIfAbsent(res, k -> new ArrayList<>()).add(arr[i]);
        }
        
        int k = n-1;
        for(ArrayList<Integer> group: map.values()){
            ArrayList<Integer> list = group;
            
            while(!list.isEmpty()){
                arr[k] = list.remove(list.size()-1);
                k--;
            }
        }
    } 
}
