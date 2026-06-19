class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>ans(n+1, 0);
        int sum=gain[0];
        ans[1]=sum;
        for(int i=1;i<n;i++){
            sum+=gain[i]; 
            ans[i+1]=sum;   
        }   
        int mx = *max_element(ans.begin(), ans.end());
        return mx;
    }
};