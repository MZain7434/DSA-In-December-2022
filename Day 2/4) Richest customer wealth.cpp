class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> sum;
        int individualsum=0;
        for(int i=0;i<accounts.size();i++){
            individualsum=0;
            for(int j=0;j<accounts[i].size();j++){
                individualsum+=accounts[i][j];
            }
            sum.push_back(individualsum);
        }
        return *max_element(sum.begin(), sum.end());
    }
};
