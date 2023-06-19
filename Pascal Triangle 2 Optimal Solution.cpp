class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        long long int ans = 1;
        v.push_back(ans);
        for(int i=1; i<=rowIndex; i++){
            ans *= (rowIndex-i+1);
            ans /= i;
            v.push_back(ans);
        }
        cout << endl;
        return v;
    }
};
