class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int d = INT_MAX, ans;
        for(int i=0; i<nums.size(); i++) {
            int s = i + 1, e = nums.size() - 1;
            while(s < e) {
                int sum = nums[i] + nums[s] + nums[e];
                if(sum == target) return sum;
                if(abs(sum - target) < d) d = abs(sum - target), ans = sum;
                sum < target ? s++ : e--;
            }
        }
        return ans;
    }
};