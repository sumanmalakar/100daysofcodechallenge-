Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"
 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.
Accepted
467.1K
Submissions
937.6K
Acceptance Rate
49.8%



class Solution {
public:
    string reverseVowels(string str) {
        int s = 0;
        int e = str.length() - 1;
        while(s<=e){
            if((str[s] == 'a' || str[s] == 'e' ||str[s] == 'i' ||str[s] == 'o' ||str[s] == 'u' ||str[s] == 'A' ||str[s] == 'E' ||str[s] == 'I' ||str[s] == 'O' ||str[s] == 'U') &&
            (str[e] == 'a' || str[e] == 'e' ||str[e] == 'i' ||str[e] == 'o' ||str[e] == 'u' ||str[e] == 'A' ||str[e] == 'E' ||str[e] == 'I' ||str[e] == 'O' ||str[e] == 'U')){
                swap(str[s], str[e]);
                s++;
                e--;
            }else if(!(str[s] == 'a' || str[s] == 'e' ||str[s] == 'i' ||str[s] == 'o' ||str[s] == 'u' ||str[s] == 'A' ||str[s] == 'E' ||str[s] == 'I' ||str[s] == 'O' ||str[s] == 'U')){
                s++;
            }else if(
                !(str[e] == 'a' || str[e] == 'e' ||str[e] == 'i' ||str[e] == 'o' ||str[e] == 'u' ||str[e] == 'A' ||str[e] == 'E' ||str[e] == 'I' ||str[e] == 'O' ||str[e] == 'U')
            ){
                e--;
            }
        }
        return str;
    }
};