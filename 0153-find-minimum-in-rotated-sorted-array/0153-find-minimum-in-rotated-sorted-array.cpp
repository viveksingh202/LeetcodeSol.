class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                continue;
            }
            else{
                return nums[i];
            }
        }  
    return nums[0];
    }
};