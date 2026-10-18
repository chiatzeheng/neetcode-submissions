class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int size = nums.size();

        for (int i = 0; i < size; i++) {
            int x = target - nums[i];

            auto it = std::find(nums.begin() + i + 1, nums.end(), x);

            if (it != nums.end()) {
                return {i, static_cast<int>(it - nums.begin())};
            }
        }

        return {};
    }
};