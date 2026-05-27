class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       vector<vector<int>> answer;
        unordered_set<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            int elem=nums1[i];
            int j=0;
            for(;j<m;j++){
                if(elem==nums2[j]){
                   break; 
                }    
            }
            if(j==m ) ans.insert(elem);
        }
        vector<int> temp(ans.begin(), ans.end());
        answer.push_back(temp);
        ans.clear();
        for(int i=0;i<m;i++){
            int elem=nums2[i];
            int j=0;
            for(;j<n;j++){
                if(elem==nums1[j]){
                   break; 
                }    
            }
            if(j==n) ans.insert(elem);
        }
        vector<int> temp1(ans.begin(), ans.end());
        answer.push_back(temp1);
        return answer;
    }
};