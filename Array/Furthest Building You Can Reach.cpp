class Solution {
public:
    int furthestBuilding(vector<int>& a, int b, int l) {
        vector<int> d;
        for(int i=1;i<a.size();i++)
        {
            d.push_back(a[i]-a[i-1]);
        }
        int start=0;
        int end=a.size()-1;
        int res=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(is_valid(d,mid,b,l))
            {
                res=mid;
                start=mid+1;
            }
            else
                end=mid-1;
        }
        return res;
    }
    bool is_valid(vector<int> d,int mid, int b,int l)
    {
        vector<int> a;
        for(int i=0;i<mid;i++)
        {
            if(d[i]>0)
                a.push_back(d[i]);
        }
        if(a.size()<=l)
            return true;
        sort(a.begin(),a.end());
        int sum=0;
        for(int i=0;i<a.size()-l;i++)
        {
            sum+=a[i];
            if(sum>b)
                return false;
        }
        return true;
        
    }
};