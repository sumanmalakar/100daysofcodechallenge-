class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        int i,j;
        int n = t.length();
       vector<bool> visited(n, false);
        for(i=0; i<t.length(); i++){
            for(j = 0; j<s.length(); j++){
                if(t[i]==s[j] && !visited[j]){
                    
                visited[j] = true;
                    break;
                }
            }if(j==s.size()){
                ans = t[i];
                break;
            }
        }
        return ans;
    }
};