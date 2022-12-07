Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
 

Constraints:

-231 <= n <= 231 - 1
 

Follow up: Could you solve it without loops/recursion?
Accepted
788.3K
Submissions
1.7M
Acceptance Rate
45.7%



class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        
       for(int i=0; i<=30; i++){
           int p = pow(2,i);
           if(p == n){
             return true;
           }
       }
        return false;
    }
};