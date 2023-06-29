class Solution {
public:
    int countTotal(int i, int j, int m, int n){
        if(i==m-1 && j==n-1) return 1;
        if(i>=m || j>=n) return 0;
        else return countTotal(i+1, j, m, n)+countTotal(i, j+1, m, n);
    }
    int uniquePaths(int m, int n) {
        return countTotal(0, 0, m, n);
    }
};
