class Solution {
public:
    int findMin(vector<int>& v) {
        int start=0;
        int n=v.size();
        int end=v.size()-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(v[mid]<v[(mid+1)%n] && v[mid]<v[(n+mid-1)%n])
            {
                return v[mid];
            }
            else if(v[mid]>=v[0])
                start=mid+1;
            else
                end=mid-1;
        }
        return v[0];
    }
};