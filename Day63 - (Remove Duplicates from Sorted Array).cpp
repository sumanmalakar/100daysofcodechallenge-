class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int count = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        nums.erase(nums.begin(),nums.end());
        for(auto it : s)
        {
            nums.push_back(it);
        }
        return nums.size();
    }
};