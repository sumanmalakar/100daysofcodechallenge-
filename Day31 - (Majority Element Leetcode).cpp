class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int target = nums.size()/2;
        int count = 1;
        int ans = nums[0];
        int i = 0;
        sort(nums.begin(), nums.end());

        for(i=0; i<nums.size()-1; i++){
              if(count>target){
                 return nums[i];
              }
              if(nums[i] == nums[i+1]){
                  count++;
              }else{
                  count = 1;
              }
        }
        if(count>target){
                ans = nums[i];     
              }
              return ans;
    }
};