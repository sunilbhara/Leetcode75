class Solution {
public:
    bool equalFrequency(string word) 
    {
        vector<int> mp(26, -1); 
        
        for(auto it:word)
        {
            if(mp[it-'a']==-1) mp[it-'a']=1;
            else mp[it-'a']++;
        }
            
        
        for(int i=0; i<26; i++)
        {
            if(mp[i]==-1) continue; 
            
            mp[i]--;
            if(mp[i]==0) mp[i]=-1;
            
            int fl=0, cnt=0, fl2=0;
            for(int i=0; i<26; i++)
            {
                if(mp[i]==-1) continue;
                
                if(fl==0)
                {
                    cnt = mp[i];
                    fl=1;
                }
                
                if(mp[i]!=cnt)
                {
                    fl2=1;
                    break;
                }
            }
            if(fl2==0) return true;
            
            if(mp[i]==-1) mp[i]=1;
            else mp[i]++;
            
        }
        return false;
    }
};
        
