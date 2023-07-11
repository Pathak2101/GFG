//{ Driver Code Starts
import java.io.*;
import java.util.*;
class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int r = sc.nextInt();
            int c = sc.nextInt();
            
            int matrix[][] = new int[r][c];
            
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                 matrix[i][j] = sc.nextInt();
            }
            Solution ob = new Solution();
            ArrayList<Integer> ans = ob.spirallyTraverse(matrix, r, c);
            for (Integer val: ans) 
                System.out.print(val+" "); 
            System.out.println();
        }
    }
}
// } Driver Code Ends


class Solution
{
    //Function to return a list of integers denoting spiral traversal of matrix.
    static ArrayList<Integer> spirallyTraverse(int matrix[][], int r, int c)
    {
        // code here 
             int n = matrix.length;
        int m = matrix[0].length;
        ArrayList<Integer> ans = new ArrayList<>();
        // code here
        int toprow=0;
        int bottomrow=n-1;
        int leftcol=0;
        int rightcol= m-1;
        
        while(toprow <= bottomrow && leftcol <= rightcol)
        {
            //toprow -> left to right
            for(int i=leftcol; i<=rightcol; i++)
            {
                ans.add(matrix[toprow][i]);
            }
            toprow++;
            
            //rightcol -> top to down
            for(int i=toprow; i<=bottomrow; i++)
            {
                ans.add(matrix[i][rightcol]);
            }
            rightcol--;            
            
            //bottomrow -> right to left
            if(toprow <= bottomrow)
            {
                for(int i=rightcol; i>=leftcol; i--)
                {
                    ans.add(matrix[bottomrow][i]);
                }
                bottomrow--;   
            }
            
            //leftcol -> bottom to top
            if(leftcol <= rightcol)
            {
                for(int i=bottomrow; i>=toprow; i--)
                {
                    ans.add(matrix[i][leftcol]);
                }
                leftcol++;
            }
        }  
        return ans;
    }
    
}
