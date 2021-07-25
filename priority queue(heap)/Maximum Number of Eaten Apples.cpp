class Solution {
public:
    int eatenApples(vector<int>& ap, vector<int>& da) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
        int i=0;
        int j=0;
        while(j<ap.size()|| p.size()!=0)
        {
            if(j<ap.size() && ap[j]!=0)
            {
                p.push({j+da[j],ap[j]});
            }
   
                while(p.size()!=0)
                {
                    if(j<p.top().first)
                    {
                        int a=p.top().first;
                       int b=p.top().second;
                        p.pop();
                        b--;
                        i++;
                        if(b>0)
                        p.push({a,b});
                        break;
                    }
                    p.pop();
                }
              
            j++;
        }
        
        return i;
        
    }
};


















