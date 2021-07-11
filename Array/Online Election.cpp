class TopVotedCandidate {
public:
    vector<int> p; 
    vector<int> t;
    unordered_map<int,int> m;
    unordered_map<int,int> ans;
    
    TopVotedCandidate(vector<int>& pi, vector<int>& ti) {
        p=pi;
        t=ti;
        
        int maxi=0;
        int a;
        for(int i=0;i<p.size();i++)
        {
            m[p[i]]++;
            if(m[p[i]]>=maxi)
            {
                ans[i]=p[i];
                maxi=m[p[i]];
                a=p[i];
            }
            else
            {
                ans[i]=a;
            }
        }
        
    }
    
    int q(int x) {
         
        int start=0;
        int end=t.size()-1;
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(t[mid]==x)
            {
                res=mid;
                break;
            }
            else if(t[mid]>x)
            {
                end=mid-1;
            }
            else
            {
                res=mid;
                start=mid+1;
            }
        }
        return ans[res];
       
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */