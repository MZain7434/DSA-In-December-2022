class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int twoD[m][n];
        vector<vector<int>> res;
        if(m*n != original.size())
            return res; 
        for (int i = 0; i < m; i++) {
             vector<int> temp;
            for (int j = 0; j < n; j++) {
                temp.push_back(original[i * n + j]);
            }
            res.push_back(temp);
        }
        return res;
    }
};
