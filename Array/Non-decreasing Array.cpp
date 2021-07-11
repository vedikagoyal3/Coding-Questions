class Solution {
public:
    bool checkPossibility(vector<int>& v) {
        int count=0;
        int mini=INT_MAX;
        if(v.size()<=2)
            return true;
        vector<int> v1,v2;
        v1.push_back(v[0]);
        int flag=0;
        for(int i=1;i<v.size();i++)
        {
            if(flag==0)
            {
                 if(v[i]>=v[i-1])
                 {
                     v1.push_back(v[i]);
                 }
                else
                {flag++;
                v2.push_back(v[i]);
                continue;
                }
            }
            if(flag==1)
            {
                if(v[i]>=v[i-1])
                 {
                     v2.push_back(v[i]);
                 }
                else
                    flag++;
            }
           
        }
        if(v1.size()+v2.size()!=v.size())
            return false;
        if(v1.size()<=1 || v2.size()<=1)
            return true;
        
        if(v1[v1.size()-2]>v2[0] && v2[1]<v1[v1.size()-1])
            return false;
        return true;
        

        
    }
};