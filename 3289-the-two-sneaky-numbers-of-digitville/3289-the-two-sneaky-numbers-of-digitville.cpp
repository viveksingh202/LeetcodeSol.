class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n-1;i++){
            int elem=nums[i];
            for(int j=i+1;j<n;j++){
                if(elem==nums[j]){
                    ans.push_back(elem);
                //    nums[j]=-1;
                    break;
                }
            }
        }
        return ans;
            
    }
};