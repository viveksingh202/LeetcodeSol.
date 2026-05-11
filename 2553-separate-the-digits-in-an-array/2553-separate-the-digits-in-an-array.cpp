class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {
            int elem = nums[i];
            vector<int> temp;

            // digits extract
            while(elem > 0) {
                temp.push_back(elem % 10);
                elem /= 10;
            }

            // reverse order me ans me daalo
            for(int j = temp.size() - 1; j >= 0; j--) {
                ans.push_back(temp[j]);
            }
        }

        return ans;
    }
};