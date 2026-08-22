class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int n1=n;
        int prod=1;
        while(n1>0){
            int md=n1%10;
            sum+=md;
            prod=prod*md;
            n1=n1/10;
        } 
        int sum1=sum+prod;
        if(n%sum1==0) return true;

        return false;    
    }
};