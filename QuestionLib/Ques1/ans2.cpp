// 1.将index和数据组成结构体, 定义向量存储；
// 2.为向量排序；
// 3.用双指针查找和为target的数据对；
// 4.返回index对。
class Solution {
public:
struct numd{
    int id;
    int val;
};
static bool cmp(numd &n1,numd &n2)
{
    return n1.val < n2.val;
}
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<numd> numsdd;
        numd numddd;
        for(int kk=0;kk<nums.size();kk++)
        {
            numddd.id = kk;
            numddd.val = nums[kk];
            numsdd.push_back(numddd);
        }
        int len = nums.size() - 1;
        int i = 0;
        int j = len;
        sort(numsdd.begin(),numsdd.end(),cmp);
        vector<int> result;
        while(i != len)
        {
            if((numsdd[i].val + numsdd[j].val) == target)
            {
                result.push_back(numsdd[i].id);
                result.push_back(numsdd[j].id);
                return result;
            }
            else if((numsdd[i].val + numsdd[j].val) > target)
            {
                j--;
            }
            else{
                i++;
            }
        }
        return result;
    }
};