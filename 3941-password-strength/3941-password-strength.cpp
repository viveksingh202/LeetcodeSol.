class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> st(password.begin(), password.end());

        int sum = 0;

        for(char ch : st) {
            if(ch >= 'a' && ch <= 'z') {
                sum += 1;
            }
            else if(ch >= 'A' && ch <= 'Z') {
                sum += 2;
            }
            else if(ch >= '0' && ch <= '9') {
                sum += 3;
            }
            else {
                sum += 5;
            }
        }

        return sum;
    }
};