class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int mx=0;
        for(int x : gain){
            sum+=x;
            mx=max(mx,sum);
        } 
        return mx;   
    }
};