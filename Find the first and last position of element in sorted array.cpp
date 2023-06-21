class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        int n = nums.size();
        int low=0, high=n-1;
        vector<int> v;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                if((mid-1 >= 0) && (nums[mid-1]==target)){
                    high = mid-1;
                }else{
                    first = mid;
                    break;
                }
            }else if(nums[mid]>target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        low=0; 
        high=n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                if((mid+1 <= n-1) && (nums[mid+1]==target)){
                    low = mid+1;
                }else{
                    last = mid;
                    break;
                }
            }else if(nums[mid]>target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        v.push_back(first);
        v.push_back(last);
        return v;
    }
};
