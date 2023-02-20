class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int c=0;
        int b=0;
        for(auto i:gain){
            c=c+i;
            if(c>b){
                b=c;
            }
        }
        return b;
    }
};