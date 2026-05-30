class Solution {
public:
    int countTestedDevices(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                count++;
                int j=i+1;
                while(j<n){
                    if(nums[j]>0){
                        nums[j]=nums[j]-1;
                    }
                    j++;
                }
            }    
        } 
        return count;   
    }
};