class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>> result;
       int n = nums.size();
       sort(nums.begin(), nums.end()); // Step 1: Sort the array
       for (int i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for(int j=i+1;j<n-2;j++){
            if (j > i+1 && nums[j] == nums[j - 1]) continue;
            long long curr_target = (long long)target - nums[i] - nums[j];
            int left = j + 1, right = n - 1;

               while (left < right) {
               int sum = nums[left] + nums[right];


               if (sum == curr_target) {
                   // Found a valid triplet
                   result.push_back({nums[i],nums[j], nums[left], nums[right]});


                   // Step 4: Skip duplicates for left and right pointers
                   while (left < right && nums[left] == nums[left + 1]) left++;
                   while (left < right && nums[right] == nums[right - 1]) right--;


                   left++;
                   right--;
               } else if (sum < curr_target) {
                   left++; // Need a larger sum
               } else {
                   right--; // Need a smaller sum
               }
           }
        }
       }
       return result;
    }
};