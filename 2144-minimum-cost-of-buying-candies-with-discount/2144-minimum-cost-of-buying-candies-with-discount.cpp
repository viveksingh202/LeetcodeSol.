class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        int sum=0;
        if(n<3){
            for(int i=0;i<n;i++){
                sum+=cost[i];
            }
            return sum;
        }  
        sort(cost.begin(), cost.end());
        int i=n-1;
        while(i>=2){
            if(cost[i-2] <= min(cost[i],cost[i-1])){
                sum+=cost[i]+cost[i-1];
                i-=3;
            }
            else{
                i--;
            }
        }
        if(i==0) sum+=cost[i];
        if(i==1) sum+=cost[i]+cost[i-1];
        return sum;  
    }
};