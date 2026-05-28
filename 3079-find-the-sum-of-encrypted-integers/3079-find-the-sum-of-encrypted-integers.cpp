class Solution {
public:
    int check(int n){
        int mx=INT_MIN;
        int count=0;
        int lar=0;
        while(n>0){
            count++;
            int md=n%10;
            if(md>mx){
                mx=md;
                lar=md;
           }
           n=n/10;
        }
        int ln=0;
        while(count>0){
            ln=ln*10+lar;
            count--;
        }
        return ln;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int m=check(nums[i]);
            sum+=m;
        }  
        return sum; 
    }
};