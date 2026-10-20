class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    //hashmap to count freq
    for (int x : nums) freq[x]++;                  

    //group by count
    vector<vector<int>> bucket(nums.size() + 1);   
    for (auto& [val, cnt] : freq)
        bucket[cnt].push_back(val);

          // step 3: zwalk from highest count down
    vector<int> res;                         
    for (int c = nums.size(); c >= 1 && res.size() < k; c--) {
        for (int val : bucket[c]) {
            res.push_back(val);
            if (res.size() == k) break;
        }
    }
    return res;
}
};
