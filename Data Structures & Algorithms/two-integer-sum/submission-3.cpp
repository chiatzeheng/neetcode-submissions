class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> seen; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];

            auto it = seen.find(x);
            if (it != seen.end()) {
                return {it->second, i};
            }

            seen[nums[i]] = i;
        }

        return {};
    }
};