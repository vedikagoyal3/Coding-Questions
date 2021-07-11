class Solution {
public:
    int minimumSize(vector<int>& a, int d) {
        int start=1;
        int end=*max_element(a.begin(),a.end());
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(is_valid(a,mid,d))        //we are supposing mid as one of the smallest element
            {
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
    }
    bool is_valid(vector<int> a,int mid,int d)       //checking if we can get mid as the ans within max operation
    {
        int count=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<=mid)
                continue;
            else
            {
                count=count+(a[i]-1)/mid;            //counting how many minimum operation required to break a[i] to mid
            }
            if(count>d)
                return false;
        }
        return true;
    }
};