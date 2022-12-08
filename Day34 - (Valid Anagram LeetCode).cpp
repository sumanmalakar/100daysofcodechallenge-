Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

Accepted
1.8M
Submissions
2.9M
Acceptance Rate
62.8%



class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
      
       int n = s.size();
        int m = t.size();
        if(n!=m) return false;
        
        for(int i=0; i<n; i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};
