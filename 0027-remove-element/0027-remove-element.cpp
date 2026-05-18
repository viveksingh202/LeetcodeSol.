class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int n = nums.size();
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        int n= nums.size();
        return n;
    }
};