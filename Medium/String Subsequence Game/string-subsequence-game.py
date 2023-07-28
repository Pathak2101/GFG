#User function Template for python3
class Solution:
    
    def solve(self, ans, tmp, i, s):
        if i == len(s):
            ans.append(''.join(tmp))
            return
        self.solve(ans, tmp, i+1, s)
        tmp.append(s[i])
        self.solve(ans, tmp, i+1, s)
        tmp.pop()
        
    def allPossibleSubsequences(self, S):
        ans = []
        tmp = []
        self.solve(ans, tmp, 0, S)
        
        res = set()
        vowel = ['a', 'e', 'i', 'o', 'u']
        consonent = [i for i in 'bcdfghjklmnpqrstvwxyz']
        
        for i in ans:
            if i=='' or len(i)==1:continue
            if i[0] in vowel and i[-1] in consonent:
                res.add(i)


        res=list(res)
        return sorted(res)



#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        S = input()
        ans=set()
        ob = Solution()
        ans = ob.allPossibleSubsequences(S)
        if(len(ans)==0):
            print(-1, end = "")
        else:
            for i in ans:
                print(i,end=" ")
        print()
# } Driver Code Ends