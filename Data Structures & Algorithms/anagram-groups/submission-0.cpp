class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // sorted string -> index of its group in arr
        std::unordered_map<std::string, int> hashmap {};
        vector<vector<string>> arr;

        for (int i = 0; i < strs.size(); i++) {
            // sort first, insert into hashmap
            string m = strs[i];
            sort(m.begin(), m.end());

            if (hashmap.find(m) == hashmap.end()) {
                hashmap[m] = arr.size();   // new group gets the next index
                arr.emplace_back();        // create the empty group
            }
        }

        for (int i = 0; i < strs.size(); i++) {
            string m = strs[i];
            sort(m.begin(), m.end());

            // find index, o(1) operation
            auto it = hashmap.find(m);

            // use index to group the strings
            arr[it->second].push_back(strs[i]);
        }

        return arr;
    }
};