class Solution {
public:
    int maxIceCream(vector<int>& v, int c) {
        
        sort(v.begin(),v.end());
        int sum=0;
        int i;
        for(i=0;i<v.size();i++)
        {
            sum=sum+v[i];
            if(sum>c)
            {
                return i;
            }
            
            
        }
        return i;
     
        // int start=0;
        // int end=v.size()-1;
        // int res=0;
        // while(start<=end)
        // {
        //     int mid=start+(end-start)/2;
        //     if(v[mid]==c)
        //         return mid+1;
        //     else if(v[mid]<c)
        //     {
        //         res=mid+1;
        //         start=mid+1;
        //     }
        //     else
        //         end=mid-1;
        // }
        // return res;
    }
};