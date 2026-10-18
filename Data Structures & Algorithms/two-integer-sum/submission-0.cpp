class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
     
        int size = nums.size(); 

        for (int i = 0; i < size; i++) {
            int x = target - nums[i];

            auto it = std::find_if(nums.begin(), nums.end(), [&](const int& val) {
                int current_index = &val - &nums[0]; 
                return val == x && current_index != i;
            });

            if (it != nums.end()) {
                int found_index = std::distance(nums.begin(), it);
                return {i, found_index};
            }
        }
        
        return {}; 
    }
};
