public class Solution {
    public int LengthOfLastWord(string s) {
        
        int cnt = 0;
        
        for(int i = s.Length-1;i>=0;i--)
        {
            if(Char.IsWhiteSpace(s[i]))
            {
                if(cnt>0)
                {
                    return cnt;    
                }
                continue;
            }
            
            cnt+=1;
        }
        return cnt;
    }
}