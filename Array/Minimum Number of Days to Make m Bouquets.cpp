class Solution {
public:
    int minDays(vector<int>& b, int m, int k) {
        if(m*k>b.size())
            return -1;
        int start=INT_MAX;
        int end=INT_MIN;
        int res=-1;
        for(int i=0;i<b.size();i++)
        {
            start=min(start,b[i]);
            end=max(end,b[i]);
        }
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(is_valid(b,mid,m,k))
            {
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
    }
    bool is_valid(vector<int> b,int mid,int m,int k)
    {
        int count=0;
        int flag=0;
        int ans=0;
        
        for(int i=0;i<b.size();i++)
        {
            if(b[i]<=mid && flag==0)
            {
                count++;
                flag=1;
                if(count==k)
                {
                    ans++;
                    count=0;
                    flag=0;
                }
                if(ans==m)
                    return true;
                continue;
            } 
            if(flag==1 && b[i]<=mid)
            {
                count++;
                if(count==k)
                {
                    ans++;
                    count=0;
                    flag=0;
                }
                if(ans==m)
                    return true;
            }
            else
            {
                count=0;
                flag=0;
            }
        }
        return false;
    }
};