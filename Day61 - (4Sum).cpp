class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>>v;
        vector<vector<int>>v1;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                long long int ans=(nums[i]+nums[j]);
                int st=j+1, en=nums.size()-1;
                while(st<en){
                    if(nums[st]+nums[en]==target-ans){
                        vector<int>temp; 
                        temp.push_back(nums[i]); 
                        temp.push_back(nums[j]); 
                        temp.push_back(nums[st]); 
                        temp.push_back(nums[en]); 
                        sort(temp.begin(), temp.end()); 
                        v.insert(temp); 
                        st++; en--;
                    }
                    else if(nums[st]+nums[en]<target-ans){st++;}
                    else{en--;}
                }
            }
        }
        for(auto it=v.begin(); it!=v.end(); it++){
            v1.push_back(*it);
        }
        return v1;
    }
};