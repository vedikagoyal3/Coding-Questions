class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int n=v.size();
        int m=v[0].size();
        int i=0;
        int j=m-1;
        while(i!=n && j!=-1)
        {
            
            if(v[i][j]==t)
                return true;
            else if(v[i][j]>t)
                j--;
            else
                i++;
        }
        return false;
        
    }
};