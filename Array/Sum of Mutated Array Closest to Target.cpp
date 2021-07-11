class Solution {
public:
    int findBestValue(vector<int>& a, int t) {
        int start=0;
        int end=*max_element(a.begin(),a.end());
        int res=-1;
        int mini=INT_MAX;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int diff=is_valid(a,mid,t);
            if(diff==0)
                return mid;
            else if(diff>0)
            {
                if(diff<=mini)
                {
                    mini=diff;
                    res=mid;
                }
                start=mid+1;
            }
            else
            {
                if(abs(diff)<mini)
                {
                    mini=abs(diff);
                    res=mid;
                }
                end=mid-1;
            }
            
        }
        return res;
    }
    
    int is_valid(vector<int> a,int mid,int t)
    {
        int sum=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>mid)
                a[i]=mid;
            sum=sum+a[i];
        }
        return t-sum;
    }
};