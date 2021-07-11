class Solution {
public:
    int smallestDivisor(vector<int>& v, int t) {
        int start=1;
        int end=*max_element(v.begin(),v.end());
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(is_valid(v,mid,t))
            {
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res; 
    }
    bool is_valid(vector<int> v,int mid,int t)
    {
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%mid==0)
                sum+=v[i]/mid;
            else
                sum+=(v[i]/mid+1);
            if(sum>t)
                return false;
        }
        return true;
    }
};