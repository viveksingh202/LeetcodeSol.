class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char>st(password.begin(), password.end());
        int sum=0;
        for(char ch:st){
            int count=0;
            if(ch>='a' && ch<='z'){
                count=1;
            } 
            else if(ch>='A' && ch<='Z'){
                count=2;
            }
            else if(ch>='0' && ch<='9'){
                count=3;
            } 
            else{
                count=5;
            }
            sum+=count;
        } 
        return sum; 
    }
};