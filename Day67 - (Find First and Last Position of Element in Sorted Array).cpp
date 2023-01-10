class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
  int s = 0;
  int e = nums.size() - 1;
  vector<int> v;
  while (s <= e)
  {
    int mid = (s + e) / 2;

    if (nums[mid] == target)
    {
      e = mid -1;
    }
    else if (nums[mid] < target)
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
    
  }
   v.push_back(s);

    s = 0;
    e = nums.size() - 1;
   while (s <= e)
   {
     int mid = (s + e) / 2;

     if (nums[mid] == target)
     {
       s = mid + 1;
     }
     else if (nums[mid] < target)
     {
       s = mid + 1;
     }
     else
     {
       e = mid - 1;
     }
   }
   v.push_back(s-1);

   return v;
    }
};