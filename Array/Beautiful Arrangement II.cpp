class Solution {
public:
    vector<int> constructArray(int n, int k) {
        int count=0;
        vector<int> ans;
        int start=2;
        int end=n;
        int flag=1;
        ans.push_back(1);
        for(int i=1;i<=n;i++)
        {
            if(count==k-1)
                break;
            if(flag==0)
            {
               ans.push_back(start); 
                flag=1;
                count++;
                start++;
                continue;
            }
            else if(flag==1)
            {
                ans.push_back(end); 
                flag=0;
                count++;
                end--;
            }
            
        }
        if(flag==0)
        {
            while(end>=start)
            {
               ans.push_back(end);
                end--;
            }
        }
        else
        {
           while(start<=end)
            {
               ans.push_back(start);
                start++;
            } 
        }
        return ans;
    }
};