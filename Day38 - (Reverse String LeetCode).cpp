Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 

Constraints:

1 <= s.length <= 105
s[i] is a printable ascii character.
Accepted
1.9M
Submissions
2.5M
Acceptance Rate
76.3%

class Solution {
public:
    void reverseString(vector<char>& str) {
        int s = 0;
        int e = str.size()-1;
        while(s<e){
            swap(str[s],str[e]);
            s++;
            e--;
        }
    }
};