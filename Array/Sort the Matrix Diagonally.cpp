class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& v) {
        int m=v[0].size();
        int n=v.size();
        int i=1;
        int j=0;
        int p;
        
        while(j!=m)
        {
            vector<int> a;
            p=0;
            int q=j;
            while(p!=n && q!=m)
            {a.push_back(v[p][q]);
             p++;
             q++;
            }
            sort(a.begin(),a.end());
            p=0;
            q=j;
            int x=0;
            while(p!=n && q!=m)
            {
                v[p][q]=a[x];
                x++;
                p++;
                q++;
            }
          j++;  
        }
        
        while(i!=n)
        {
            vector<int> a;
            p=i;
            int q=0;
            while(p!=n && q!=m)
            {a.push_back(v[p][q]);
             p++;
             q++;
            }
            sort(a.begin(),a.end());
            p=i;
            q=0;
            int x=0;
            while(p!=n && q!=m)
            {
                v[p][q]=a[x];
                x++;
                p++;
                q++;
            }
          i++;  
        }
        return v;
    }
};