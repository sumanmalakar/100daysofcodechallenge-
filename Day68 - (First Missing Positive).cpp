class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int max_e = nums[0];
        int min_e = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(max_e<nums[i]){
                max_e = nums[i];
            }
        }
          for(int i = 1; i<nums.size(); i++){
              if(nums[i]>min_e){
                  min_e = nums[i];
              }
          }
        
        int n = nums.size();
        if(n==1){
            if(nums[0]== 0 || nums[0]>=2){
                return 1;
            }
            else if(nums[0]==1){
                return 2;
            }else{
                return 1;
            }
        }
        int s = max(n, max_e);
    
        vector<int> f(s+1, 0);
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                continue;
            }else{
                f[nums[i]]++;
            }
        }
        int i, k;
        for(i=1; f.size(); i++){
            if(f[i]==0){
                k = i;
                break;
            }
        }if(i==f.size()){
            return min_e;
        }
        
        return k;
    
    
    }
};