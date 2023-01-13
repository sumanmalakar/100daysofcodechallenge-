class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int i, j;
        long long int sum = 0,k;
  vector<int> v;
  for (i = 0; i < digits.size(); i++)
  {
    sum = sum * 10 + digits[i];
  }
                cout<<sum<<" ";

  k = sum + 1;
        cout<<k;
  digits.clear();
  while (k != 0)
  {
    int x = k % 10;
    digits.push_back(x);
    k = k / 10;
  }

  for(int i = digits.size()-1; i>=0; i--){
    v.push_back(digits[i]);
  }

                    return v;
    }
};