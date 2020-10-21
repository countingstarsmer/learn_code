class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { //定义nums和target
            unordered_map<int, int> hashtable;//unordered_map是一种无序的表，定义哈希表
                    for (int i = 0; i < nums.size(); i++) {
                                auto it = hashtable.find(target - nums[i]);//it：查找这个出现的位置
                                        if (it != hashtable.end()) {
                        return {it->second, i};//判断在不在，如果不在就加入hash表，进行下一次循环
                                                                        }
                                                                                    hashtable[nums[i]] = i;//把当前的那个加进去
                                                                                            }
                                                                                                    return {};//返回哈希表的值
                                                                                                        }
                                                                                                        };

                                                                                                    
