/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& a, int z) {
        
        vector<vector<int>> ans;
        for(int x=1;x<=z;x++)
        {
            int i=1;
            int j=z;
           while(i<=j)
        {
             int mid=i+(j-i)/2;
               if(a.f(x,mid)==z)
               {
                   vector<int> v;
                   v.push_back(x);
                   v.push_back(mid);
                   ans.push_back(v);
                   break;
               }
               else if(a.f(x,mid)>z)
               {
                   j=mid-1;
               }
               else
                   i=mid+1;
        }
            
        }
        return ans;
        
    }
};