class TimeMap {
public:
    /** Initialize your data structure here. */
  
    unordered_map<string,map<int,string>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int t1) {
       
       m[key][t1]=value;
    }
    
    string get(string key, int t2) {
        if(m.find(key)!=m.end())
        {
            auto y=m.find(key);
            auto x=m[key].upper_bound(t2);
            if(x==m[key].begin())
                return "";
            x--;
            return x->second;
        }
       
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */