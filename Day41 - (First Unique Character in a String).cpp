Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"
Output: 0
Example 2:

Input: s = "loveleetcode"
Output: 2
Example 3:

Input: s = "aabb"
Output: -1
 

Constraints:

1 <= s.length <= 105
s consists of only lowercase English letters.
Accepted
1.3M
Submissions
2.2M
Acceptance Rate
59.1%


class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0; i<s.length(); i++){
            int j;
            for(j =0; j<s.length(); j++){
                if((s[i]==s[j]) && (i!=j)){
                    break;
                }
            }
            if(j==s.length()){
                return i;
            }
        }
        return -1;
    }
};