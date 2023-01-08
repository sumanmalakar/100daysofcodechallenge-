class Solution {
public:
     int smallest_element(vector<int> arr){
         int n = arr.size();
         int s = 0, e = n-1;
         int mid = 0, prev = 0, next = 0;
         
         while(s<=e){
             mid = s + (e-s)/2;
             next = (mid+1)%n;
             prev = (mid - 1 +n)%n;
             
             if(arr[mid]< arr[prev] && arr[mid]<arr[next]){
                 return mid;
             }else if(arr[mid]>=arr[0]){
                 s = mid+1;
             }else {
                 e = mid - 1;
             }
         }
         return mid;
     } 
    
    int  binary_search(vector<int>v, int s, int e , int key){
        while(s<=e){
            int mid = s + (e-s)/2;
            
            if(v[mid]==key){
                return mid;
            }else if(v[mid]>key){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int index = smallest_element(nums);
        int first = binary_search(nums, 0, index-1, target);
        int second = binary_search(nums,index + 1,nums.size()-1, target);
         
               cout<<first<<" "<<second<<" "<<index;

        if(nums[index] == target){
            return index;
        }else{
            if(first>=0){
                return first;
            }else{
                return second;
            }
        }
        
        return -1;
    }
};