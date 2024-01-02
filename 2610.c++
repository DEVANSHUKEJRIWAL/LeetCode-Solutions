class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> map;
        int count =0;
        for(auto a:nums){
            map[a]++;
            count = max(count, map[a]);
        }

        vector<vector<int>> ans(count);
        for(auto a:map){
            int num = a.first;
            int freq = a.second;
            for(int i=0;i<freq;i++){
                ans[i].push_back(num);
            }
        }
        return ans;

        
    }
};