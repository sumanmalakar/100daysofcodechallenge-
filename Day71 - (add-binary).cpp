class Solution
{
public:
    string addBinary(string a, string b)
    {
        string str;
        int m = a.length() - 1;
        int n = b.length() - 1;
        int carry = 0;

        //Check for last element of both strings
        while (m >= 0 || n >= 0)
        {
            int sum = carry;
            if (m >= 0)
                sum += a[m--] - '0';
            if (n >= 0)
                sum += b[n--] - '0';

            //If sum >= 1 ... as 2 = 10 & 3 = 11
            carry = sum > 1 ? 1 : 0;
            // If sum = 1,3 -> {carry = 0/1,sum = 1} , sum = 2,4 -> {carry = 0/1,sum = 0}
            str += to_string(sum % 2);
        }
        if (carry)
            str += to_string(carry);
        reverse(str.begin(), str.end());
        return str;
    }
};