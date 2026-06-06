class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                    j++;
                
            }
        }
        while(i<n){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(nums2[j]);
            j++;
        }
        int p = ans.size();
        int start=0;
        int end=p-1;
        int mid=start + (end-start)/2;
        if(p%2!=0){
            return double (ans[mid]);
        }
        
        return double (ans[mid]+ans[mid+1])/2;
    }
};