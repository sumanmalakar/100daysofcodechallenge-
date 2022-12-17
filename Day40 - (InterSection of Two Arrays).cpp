Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 

Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
Accepted
783K
Submissions
1.1M
Acceptance Rate
70.4%



class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums1.begin(), nums1.end());

        for(int i=0; i<nums1.size(); i++){
            if((i != 0) && (nums1[i-1] == nums1[i]) ) continue;
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    ans.push_back(nums1[i]);
                    break;
                }
            }
        }
        return ans;
    }
};


