class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        
        vector<int> f(nums.size()+1,0);
        for(int i=0; i<nums.size();i++){
            f[nums[i]]++;
        }
        
        for(int i=1; i<f.size(); i++){
            if(f[i]==0){
                v.push_back(i);
            }
        }
        return v;
    }
};