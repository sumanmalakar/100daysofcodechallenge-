Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Could you minimize the total number of operations done?
Accepted
2M
Submissions
3.3M
Acceptance Rate
61.4%



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1)return;

        
        int s = 0, e = s+1;

        
        while(e<nums.size() && s<nums.size()){
            if(nums[s]==0 && nums[e]!=0 && e>s){
                swap(nums[s], nums[e]);
                s++;
                e++;
            }else if(nums[s]!=0 ){
                s++;
            }else if(nums[e]==0 || e<s){
                e++;
            }
        }
    }
};