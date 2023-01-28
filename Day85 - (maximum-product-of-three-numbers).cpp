class Solution {
public:
    int maximumProduct(vector<int>&v) {
        int k =1, count =0;
      sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            
            if(v[i]<0){
                count++;
            }else{
                break;
            }
        }if(count == v.size()){
     reverse(v.begin(), v.end());
        k = k*v[0]*v[1]*v[2];
        }else{
      reverse(v.begin(), v.end());        
    int n = v.size();
           int s = k*v[0]*v[n-1]*v[n-2];          
        for(int i=0; i<3; i++){
            k = k*v[i];
        } 
            k = max(s,k);
        }
        return k;
    }
};