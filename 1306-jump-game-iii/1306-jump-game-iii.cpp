class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();

        queue<int> q;
        vector<bool> vis(n, false);

        q.push(start);
        vis[start] = true;

        while(!q.empty()) {
            int i = q.front();
            q.pop();

            // If we reach value 0
            if(arr[i] == 0)
                return true;

            int right = i + arr[i];
            int left  = i - arr[i];

            // Move right
            if(right < n && !vis[right]) {
                vis[right] = true;
                q.push(right);
            }

            // Move left
            if(left >= 0 && !vis[left]) {
                vis[left] = true;
                q.push(left);
            }
        }

        return false;
    }
};