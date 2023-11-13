class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Sort the array in ascending order
        sort(nums.begin(), nums.end());
        
        // Get the middle element (majority element)
        int n = nums.size();
        return nums[n/2];
    }
};
