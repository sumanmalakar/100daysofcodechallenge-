class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums){
        long sum=0;
        long sumofsquare=0;
        long n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            sumofsquare+=(nums[i]*nums[i]);
        }
        long nsum=n*(n+1)/2; //sum of first n natural numbers
        long sumdiff=nsum-sum;
        long nsquaresum=n*(n+1)*(2*n+1)/6; //sum of squares of first n natural numbers
        long squaresumdiff=nsquaresum-sumofsquare;
        long temp=squaresumdiff/sumdiff;
        int missingnum=(temp+sumdiff)/2;
        int repeatingnum=missingnum-sumdiff;
        vector<int> ans;
        ans.push_back(repeatingnum);
        ans.push_back(missingnum);
        return ans;
    }
};