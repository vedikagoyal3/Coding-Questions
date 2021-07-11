class Solution {
public:
    int minPairSum(vector<int>& v) {
        int i=0,j=v.size()-1;
        int maxi=INT_MIN;
        sort(v.begin(),v.end());
        while(i<j)
        {
            maxi=max(maxi,v[i]+v[j]);
            i++;
            j--;
        }
        return maxi;
    }
};