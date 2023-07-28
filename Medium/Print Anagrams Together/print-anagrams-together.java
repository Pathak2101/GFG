//{ Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {
    public static void main (String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	        
	    int t=Integer.parseInt(br.readLine().trim());
	    while(t > 0)
	    {
	        int n= Integer.parseInt(br.readLine().trim());
	        String x = br.readLine().trim();
	        String string_list[] = x.split(" ",n);
	        
	        Solution ob = new  Solution();
	        
	        List <List<String>> ans = ob.Anagrams(string_list);
	        
	        Collections.sort(ans, new Comparator<List<String>>(){
            public int compare(List<String> l1, List<String> l2) {
                    String s1 =  l1.get(0);
                    String s2 = l2.get(0);
                    
                    return s1.compareTo(s2);
                }
            });
	        
	        for(int i=0;i<ans.size();i++)
	        {
	            for(int j=0;j<ans.get(i).size();j++)
	            {
	                System.out.print(ans.get(i).get(j) + " ");
	            }
	            System.out.println();
	        }
	       
	       
            t--;
	    }
	}
    
}

// } Driver Code Ends


//User function Template for Java

class Solution {
    public List<List<String>> Anagrams(String[] arr) {
        // Code here
        Map<List<Character>, List<String>> map = new LinkedHashMap<>();  
        for(int i=0;i<arr.length;i++) {
            List<Character> ch = new ArrayList<>();
            for(int j=0;j<arr[i].length();j++) {
                ch.add(arr[i].charAt(j));
            }
            Collections.sort(ch);
            if(!map.containsKey(ch)) {
                List<String> l = new ArrayList<>();
                l.add(arr[i]);
                map.put(ch, l);
            } else {
                List<String> l =map.get(ch);
                l.add(arr[i]);
                map.put(ch, l);
            }
        }
        List<List<String>> li = new ArrayList<>();
        for(List<Character> key: map.keySet()) {
            li.add(map.get(key));
        }
        return li;
    }
}
