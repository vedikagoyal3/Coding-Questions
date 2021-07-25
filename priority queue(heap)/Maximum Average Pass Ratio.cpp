class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& v, int k) {
        priority_queue<pair<double,pair<int,int>>> p;
        double sum=0;
        for(int i=0;i<v.size();i++)
        {
            int a=v[i][0];
            int b=v[i][1];
            double c=(double)a/(double)b;
     
            sum=sum+c;
          
            a++;
            b++;
            double d=(double)a/(double)b;
            double f=d-c;
            p.push({f,{a,b}});
            
        }
        cout<<sum<<endl;
        for(int i=0;i<k;i++)
        {
            sum=sum+p.top().first;
            pair<int,int> q=p.top().second;
            int a=q.first;
            int b=q.second;
            double d=(double)a/(double)b;
            a++;
            b++;
            p.pop();
            double c=(double)a/(double)b;
            p.push({c-d,{a,b}});
        }
        
        double ans=sum/v.size();
        
        
        return ans;
        

        
        
    }
};