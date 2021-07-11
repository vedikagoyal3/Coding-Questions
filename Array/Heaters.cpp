class Solution {
public:
    int findRadius(vector<int>& v, vector<int>& h) {
        sort(v.begin(),v.end());
        sort(h.begin(),h.end());
        int start=0;
        int x1=max(abs(h[h.size()-1]-v[0]),abs(h[h.size()-1]-v[v.size()-1]));
        int x2=max(abs(h[0]-v[0]),abs(h[0]-v[v.size()-1]));
        int end=max(x1,x2);
        int res=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(is_valid(v,h,mid))
            {
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
    }
    bool is_valid(vector<int> v,vector<int>h, int mid)
    {
        int mini=v[0];
        int maxi=v[v.size()-1];
        int xmin,xmax;
        for(int i=0;i<h.size();i++)
        {
            xmin=h[i]-mid;
            xmax=h[i]+mid;
            if(i==h.size()-1)
            {
                if(xmin>mini)
                    return false;
                if(xmax<maxi)
                    return false;
                break;
            }
            if(xmin>mini)
                return false;
            else
            {
                mini=xmax;
                int result=-1;
                int s=0;
                int e=v.size()-1;
                while(s<=e)
                {
                    int m=s+(e-s)/2;
                    if(v[m]>mini)
                    {
                        result=v[m];
                        e=m-1;
                    }
                    else
                        s=m+1;
                }
                mini=result;
                if(mini==-1)
                    return true;
            }
            
                
        }
        return true;
    }
};