class Solution {
public:
    int maxDistance(vector<int>& v, int m) {
        int start=0;
        int end=*max_element(v.begin(),v.end());
        sort(v.begin(),v.end());
        int res=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(is_valid(v,mid,m))
            {
                res=mid;
                start=mid+1;
            }
            else
                end=mid-1;
        }
        return res;
    }
    bool is_valid(vector<int> v,int mid,int m)
    {
        int count=1;
        int x=v[0];
        while(count!=m && x<v[v.size()-1])
        {
            x=x+mid;
            int start=0;
            int end=v.size()-1;
            int ans=-1;
            while(start<=end)
            {
                int p=start+(end-start)/2;
                if(v[p]==x)
                {
                    ans=v[p];
                    break;
                }
                else if(v[p]>x)
                {
                    ans=v[p];
                    end=p-1;
                }
                else
                    start=p+1;
            }
            if(ans!=-1)
            {
                count++;
                x=ans;
                if(count==m)
                    return true;
            }
            else
            {
               break; 
            }
        }
        if(count==m)
            return true;
        return false;
    }
};