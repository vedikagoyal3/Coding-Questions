class Solution {
public:
    int waysToMakeFair(vector<int>& a) {
        int e=0,o=0;
        for(int i=0;i<a.size();i++)
        {
            if(i%2==0)
                e+=a[i];
            else
                o+=a[i];
        }
        int preveven=0,prevodd=0,aftereven=e,afterodd=o;
        int count=0;
        for(int i=0;i<a.size();i++)
        {
            if(i%2==0)
            {
                aftereven-=a[i];
                swap(aftereven,afterodd);
                if(preveven+aftereven==prevodd+afterodd)
                    count++;
                preveven+=a[i];
                swap(aftereven,afterodd);
            }
             else
            {
                afterodd-=a[i];
                swap(aftereven,afterodd);
                if(preveven+aftereven==prevodd+afterodd)
                    count++;
                prevodd+=a[i];
                swap(aftereven,afterodd);
            }
        }
        return count;
    }
};