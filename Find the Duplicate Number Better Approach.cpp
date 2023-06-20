class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = -1;
        int n = nums.size();
        vector<int> v(n+1);
        for(int i=0; i<n; i++){
            if(v[nums[i]]==0){
                v[nums[i]]++;
            }else{
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};
