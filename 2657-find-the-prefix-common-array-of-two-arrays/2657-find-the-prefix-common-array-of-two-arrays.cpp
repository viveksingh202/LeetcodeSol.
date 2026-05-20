class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {

        int n = A.size();

        vector<int> ans;

        unordered_set<int> s1, s2;

        int common = 0;

        for(int i = 0; i < n; i++) {

            // agar A[i] pehle B me aa chuka h
            if(s2.count(A[i])) {
                common++;
            }

            // agar B[i] pehle A me aa chuka h
            if(s1.count(B[i])) {
                common++;
            }

            // agar dono same h aur pehli baar aaye h
            if(A[i] == B[i]) {
                common++;
            }

            s1.insert(A[i]);
            s2.insert(B[i]);

            ans.push_back(common);
        }

        return ans;
    }
};