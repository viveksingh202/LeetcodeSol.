class Solution {
public:
    int leftsum(int i, vector<int>& arr){
        int j=i-1;
        int sum=0;
        while(j>=0){
           sum+=arr[j];
           j--;
        }
        return sum;
    }
     int rightsum(int i, vector<int>& arr){
        int j=i+1;
        int sum=0;
        while(j<arr.size()){
           sum+=arr[j];
           j++;
        }
        return sum;
    }
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum1=leftsum(i, nums);
            int sum2=rightsum(i, nums);
            ans.push_back(abs(sum1-sum2));
        } 
        return ans;   
    }
};