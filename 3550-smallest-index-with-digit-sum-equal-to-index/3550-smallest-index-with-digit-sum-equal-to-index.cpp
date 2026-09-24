class Solution {
public:
    int sum(int n){
        int sum=0;
        while(n>0){
            int md=n%10;
            sum=sum+md;
            n=n/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum1 = sum(nums[i]);
            if(sum1 == i) return i;
        } 
        return -1;   
    }
};