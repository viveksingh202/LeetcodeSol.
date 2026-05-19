class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0 , j=0;
        int n1=nums1.size();
        int n2=nums2.size();
        int count=INT_MAX;
        while(i<n1 && j<n2){
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                if(nums1[i]<count) count=nums1[i];
                i++;
                j++;
            }
        }  
        if(count == INT_MAX) return -1;
        return count;  
    }
};