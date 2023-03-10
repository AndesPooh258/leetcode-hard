class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        nums.push_back(0);
        int n = nums.size();
        for (int i = 0; i < n; i++) 
            nums[i] = nums[i] <= 0 || nums[i] >= n ? 0 : nums[i];
        for (int i = 0; i < n; i++)
            nums[nums[i] % n] += n;
        for (int i = 1; i < n; i++)
            if (nums[i] < n) return i;
        return n;
    }
};