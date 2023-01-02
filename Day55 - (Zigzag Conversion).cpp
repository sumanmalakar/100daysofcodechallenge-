public:
    string convert(string &s, int numRows) {
        int n = s.size();
        if(numRows <= 1) return s;
        string ans = "";
        vector<string> out(numRows);
        int crow = 0, dir = 1;  //1->going down 2->going up
        for(int i = 0; i < n; i++) {
            out[crow].push_back(s[i]);
            // if hit the turning point, change direction
            if(crow == 0) dir = 1;
            else if((crow+1) == numRows) dir = 2;
            // inc or dec row depending upon the turning pt direction
            if(dir == 1) crow++;
            else crow--;        
            
        }

        for(auto &str: out) ans += str;
        return ans;
    }
};