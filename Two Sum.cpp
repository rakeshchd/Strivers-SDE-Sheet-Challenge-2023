class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            int remaining = target - nums[i];
            if(find(nums.begin()+i+1, nums.end(), remaining) != nums.end()){
                return {(int)(find(nums.begin()+i+1, nums.end(), remaining) - nums.begin()), i};
            }
        }
        return {-1, -1};
    }
};
