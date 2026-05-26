class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int n=salary.size();
        int count=0;
        int total=0;
        for(int i=1;i<n-1;i++){
            count++;
            total+=salary[i];
        }   
        return (double)total/count; 
    }
};