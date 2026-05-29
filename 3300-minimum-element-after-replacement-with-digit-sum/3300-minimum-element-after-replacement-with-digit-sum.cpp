class Solution {
public:
    int check(int n){
        int sum=0;
        while(n>0){
            int md=n%10;
            sum=sum+md;
            n=n/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int count=check(nums[i]);
            nums[i]=count;
        }  
        sort(nums.begin(), nums.end());
        return nums[0];  
    }
};