class Solution {
public:
    bool is_valid(vector<int> d, double h,int mid)
        {
            double a=0;
            for(int i=0;i<d.size()-1;i++)
            {
                a+=(d[i]/mid)+(d[i]%mid!=0);
                if(a>h)
                    return false;
            }
        int i=d.size()-1;
            a+=(double(d[i])/double(mid));
            if(a>h)
                return false;
            else
                return true;
        }
    
    int minSpeedOnTime(vector<int>& d, double h) {
        int start=1;
        int end=100000000;
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(is_valid(d,h,mid))
            {
                res=mid;
                end=mid-1;
                
            } 
            else
                start=mid+1;

        }
        return res;
    }
        
};


