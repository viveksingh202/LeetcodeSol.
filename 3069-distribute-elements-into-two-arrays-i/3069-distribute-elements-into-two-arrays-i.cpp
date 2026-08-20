class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        int elem1=nums[0];
        arr2.push_back(nums[1]);
        int elem2=nums[1];
        for(int i=2;i<n;i++){
            if(elem1>elem2){
                arr1.push_back(nums[i]);
                elem1=nums[i];
            }
            else{
                arr2.push_back(nums[i]);
                elem2=nums[i];
            }

        }
        vector<int>result;
        for(int i=0;i<arr1.size();i++){
            result.push_back(arr1[i]);
        }
        for(int i=0;i<arr2.size();i++){
            result.push_back(arr2[i]);
        }
        return result;
    }
};