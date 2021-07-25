class Twitter {
public:
    priority_queue<vector<int>> p;
    vector<unordered_set<int>> friends;
    int i=0;
    /** Initialize your data structure here. */
    Twitter() {
        vector<unordered_set<int>>b(1001);
        friends=b;
    
    }
    
    /** Compose a new tweet. */
    void postTweet(int u, int t) {
        p.push({i,u,t});
        i++;
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int u) {
        int count=0;
        priority_queue<vector<int>> temp=p;
        vector<int>ans;
        while(temp.size()>0 && count<10)
        {
            vector<int> m=temp.top();
            temp.pop();
            if(friends[u].find(m[1])!=friends[u].end() || m[1]==u)
            {
                ans.push_back(m[2]);
                count++;
            }
            
        }
        return ans;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int f, int fo) {
        friends[f].insert(fo);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int f, int fo) {
        friends[f].erase(fo);
    }
};



















/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */