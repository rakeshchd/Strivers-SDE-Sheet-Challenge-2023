vector<int> generateRow(int r){
    vector<int> v;
    long long int ans = 1;
    v.push_back(ans);
    for(int i=1; i<r; i++){
        ans *= (r-i);
        ans /= i;
        v.push_back(ans);
    }
    return v;
}
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1; i<=numRows; i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};
