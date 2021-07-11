class Solution {
public:
    int getXORSum(vector<int>& a1, vector<int>& a2) {
        int x=a2[0];
        for(int i=1;i<a2.size();i++)
        {
            x=x^a2[i];
        }
   
        int p=a1[0]&x;
       
        for(int i=1;i<a1.size();i++)
        {
            p=p^(a1[i]&x);
        }
        return p;
    }
};