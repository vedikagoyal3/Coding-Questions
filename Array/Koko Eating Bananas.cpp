class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        
        int start=1;
        int end=*max_element(p.begin(),p.end());
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(is_valid(p,mid,h))
            {
              res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
        
    }
    bool is_valid(vector<int> p,int mid,int h)
    {
        int count=0;
        for(int i=0;i<p.size();i++)
        {
            if(p[i]%mid==0)
            {
                count=count+p[i]/mid;
            }
            else
                 count=count+(p[i]/mid)+1;
            
            if(count>h)
                return false;
        }
        return true;
        
    }
};