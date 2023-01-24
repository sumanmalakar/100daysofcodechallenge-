class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> q;
        for(auto x: score) q.push(x);
        map<int, string> mp;
        for(int i=1; i<=score.size(); i++) {
            string s;
            if(i == 1) s = "Gold Medal";
            else if(i == 2) s = "Silver Medal";
            else if(i == 3) s = "Bronze Medal";
            else s = to_string(i);
            mp[q.top()] = s;
            q.pop();
        }
        vector<string> ans;
        for(auto x: score) {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};