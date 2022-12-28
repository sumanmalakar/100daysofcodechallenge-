class Solution {
public:
    int strStr(string haystack, string needle) {
   int   n = -1;
        while(haystack.length()!=0 && haystack.find(needle)<haystack.length()){
             n = haystack.find(needle);
            if(n>=0){
                break;
            }
        }
        
        
        
        return n;
    }
};