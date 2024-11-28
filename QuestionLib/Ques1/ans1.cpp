//使用hash表，传入数组nums，两数之和目标target，hash表查询target-nums[i]是否在表中，查到则返回index
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashtable;
        for(int i = 0; i < nums.size(); i++)
        {
            if(hashtable.find(target - nums[i]) == hashtable.end())
            {
                hashtable[nums[i]] = i;
            }
            else
            {
                return {i,hashtable.find(target-nums[i])->second};
            }
        }
        return {};
    }
};