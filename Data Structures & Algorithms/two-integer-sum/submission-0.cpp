class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> finalMap;

        for(int i=0;i<n;i++){
            int differ= target - nums[i];
            if (finalMap.find(differ)!= finalMap.end()){
                return {finalMap[differ],i};
            }
            finalMap.insert({nums[i],i});
        }
        return {};        
        
    }
};
