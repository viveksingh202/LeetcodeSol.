class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    vector<bool> vis;

    void backtrack(vector<int>& nums) {
        if (path.size() == nums.size()) {
            ans.push_back(path);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (vis[i]) continue;

            vis[i] = true;
            path.push_back(nums[i]);

            backtrack(nums);

            path.pop_back();
            vis[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vis.resize(nums.size(), false);
        backtrack(nums);
        return ans;
    }
};