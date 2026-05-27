class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i+=2){
            sum1+=nums[i];
        }
        for(int i=1;i<n;i+=2){
            sum2+=nums[i];
        }
        return sum1-sum2;
    }
};