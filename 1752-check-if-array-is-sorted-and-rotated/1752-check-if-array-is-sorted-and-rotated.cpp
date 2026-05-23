class Solution {
public:
    bool check(vector<int>& nums, int idx){
        for(int i = idx; i < (int)nums.size() - 1; i++){
            if(nums[i+1] < nums[i]) return false;
        }
        return true;
    }

    bool check(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        for(; i < n - 1; i++){
            if(nums[i+1] < nums[i]) break;
        }

        // already sorted (no drop)
        if(i == n - 1) return true;
        
        if(nums[n - 1] > nums[0]) return false;

        return (check(nums, i + 1)) ;

    }
};
