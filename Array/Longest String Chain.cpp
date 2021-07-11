class Solution {
public:
    bool solve(string str1,string str2){
        int len1 = str1.length();
        int len2 = str2.length();
    
        if(len1 != len2-1)
            return false;
        
        int i = 0,j = 0;
        
        while(i < len1 && j < len2){
            if(str1[i] != str2[j]){
                if(j-i == 1)
                    return false;
                j++;
            }
            else{
                i++, j++; 
            }
        }
        return (j-i <= 1);
    }
    bool static comp(string s1,string s2)
    {
        if(s1.length()<s2.length())
            return true;
        else
            return false;
    }
    int longestStrChain(vector<string>& words) {
        int n=words.size();
        sort(words.begin(),words.end(),comp);
        int dp[n];
        for(int i=0;i<n;i++)
            dp[i]=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(solve(words[j],words[i])==true && dp[i]<dp[j]+1)
                    dp[i]=dp[j]+1;
            }
        }
        return *max_element(dp,dp+n);
    }
};