class Solution {
    public:
        int lengthOfLIS(vector<int>& nums) {
            int n = nums.size();
            vector<int> temp;
            temp.push_back(nums[0]);
            int count =1;
            for(int i=1;i<n;i++){
                if(nums[i]>temp.back()){
                    temp.push_back(nums[i]);
                    count++;
                }else{
                    int len = lower_bound(temp.begin(), temp.end(),nums[i])-temp.begin();
                    temp[len] = nums[i];
                }
            }
            return count;
            
        }
    };