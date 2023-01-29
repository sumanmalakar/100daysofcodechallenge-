class Solution {
public:
   double findMaxAverage(vector<int> &nums, int k)
{
  int i, count = 0;
  double cs = 0.0;
  double avg;
  double max_sum;
  vector<double> v;

  for (i = 0; i < nums.size(); i++)
  {
    count++;
    cs = cs + nums[i];
    if (count == k)
    {
      avg = cs / k;
      v.push_back(avg);
      cs = 0;
      count = 0;
      i = i - k + 1;
    }
  }
  max_sum = v[0];
  for (int i = 0; i < v.size(); i++)
  {
    if (max_sum < v[i])
    {
      max_sum = v[i];
    }
  }

  return max_sum;
}

};