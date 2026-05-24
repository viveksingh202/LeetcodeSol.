class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);

        for(int i = 0; i < n; i++) {

            int idx = (i + 1) % n;

            while(idx != i) {

                if(nums[idx] > nums[i]) {
                    ans[i] = nums[idx];
                    break;
                }

                idx = (idx + 1) % n;
            }
        }

        return ans;
    }
};