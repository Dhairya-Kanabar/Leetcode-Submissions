class Solution {
public:
    void generateSubsets(vector<int>& nums, vector<int>& current, int index, vector<vector<int>>& result) {
        if (index == nums.size()) {
            result.push_back(current);
            return;
        }

        // Exclude nums[index]
        generateSubsets(nums, current, index + 1, result);

        // Include nums[index]
        current.push_back(nums[index]);
        generateSubsets(nums, current, index + 1, result);
        current.pop_back(); // backtrack
    }

    static bool customSort(const vector<int>& a, const vector<int>& b) {
        if (a.size() != b.size()) return a.size() < b.size();
        return a < b; // lexicographical order if sizes are equal
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        generateSubsets(nums, current, 0, result);
        sort(result.begin(), result.end(), customSort); // optional sort
        return result;
    }
};
