class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& a) {
        sort(a.begin(),a.end());
         int n=a.size();
        vector<int> v(n,-1);
        bool flag=true;
        int j=0;
        for(int i=0;i<n;i++)
        {
            while(1)
            {
                if(v[j%n]==-1 && flag==true)
                {
                    v[j%n]=a[i];
                    flag=false;
                    j++;
                    break;
                }
                if(v[j%n]==-1 && flag==false)
                {
                    flag=true;
                }
                j++;
            }
            
        }
        return v;
    }
};