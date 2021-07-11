class Solution {
public:
    int shipWithinDays(vector<int>& w, int d) {
        int start=*max_element(w.begin(),w.end());
        int end=accumulate(w.begin(),w.end(),0);
        int n=w.size();
        int res;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(is_valid(w,n,d,mid)==true)
            {
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
    }
    
   bool is_valid(vector<int> w,int n,int d,int mid)
   {
       int days=1;
       int sum=0;
       for(int i=0;i<n;i++)
       {
           sum+=w[i];
           if(sum>mid)
           {
               days++;
               sum=w[i];
           }
               if(days>d)
                   return false;
       }
       return true;
   }
};