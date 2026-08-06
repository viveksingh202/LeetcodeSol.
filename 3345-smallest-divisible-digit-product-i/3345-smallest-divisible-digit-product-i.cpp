class Solution {
public:
    int smallestNumber(int n, int t) {
        bool flag = true;

        while(flag == true) {
            int m = n;
            int prod = 1;

            while(m > 0) {
                int mod = m % 10;
                prod = prod * mod;
                m = m / 10;
            }

            if(prod % t == 0) {
                flag = false;
            }
            else {
                n += 1;
            }
        }

        return n;
    }
};