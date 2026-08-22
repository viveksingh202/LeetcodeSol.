class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int n1 = n;

        while (n1 > 0) {
            int md = n1 % 10;
            sum += md;
            prod *= md;
            n1 = n1 / 10;   
        }

        int sum1 = sum + prod;

        return n % sum1 == 0;
    }
};