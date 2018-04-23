class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        int ans=0;
        char c[]={'I','V','X','L','C','D','M'};
        int t[]={1,5,10,50,100,500,1000};
        for(int i=0;i<7;i++){
            m.insert(pair<char,int>(c[i],t[i]));
        }
        for(int i=0;i<s.size();i++){
            if(m[s[i]]>=m[s[i+1]]){
                ans+=m[s[i]];
            }else {ans-=m[s[i]];}
        }
        
        return ans;
        
          
        
    }
};
