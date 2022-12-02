class Solution {
public:
    bool isPalindrome(string s) {
        string word = "";
        int n = s.length();
         // if(n==2 && s[0]!=s[1])return false;
        
        
        for(int i=0; i<n; i++){
            if(s[i]>='a' && s[i]<='z'){
                word += s[i];
            }
            else if(s[i]>='A' && s[i]<='Z'){
                word += s[i] +32;
            }else if(s[i]>='0'&& s[i]<='9'){
        word+= s[i];

            }
        }
        
        int m = word.length();
            int i=0, j = m-1;
            while(i<j){
                 if(word[i]!=word[j]){
                                         return false;

                 }else{
                     i++;
                     j--;
                 }
                }
            return true;
    }
};