class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> p;
        if(a!=0)
            p.push(a);
        if(b!=0)
            p.push(b);
        if(c!=0)
            p.push(c);
        int count=0;
        while(p.size()>=2)
        {
            a=p.top();
            p.pop();
            b=p.top();
            p.pop();
            a--;
            b--;
            count++;
            if(a!=0)
                p.push(a);
            if(b!=0)
                p.push(b);
        }
        return count;
    }
    
    

    
    
};