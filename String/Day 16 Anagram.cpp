class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        vector<int>count(26,0);
        for(char a:s1)
        count[a-'a']++;
        for(char a:s2)
        count[a-'a']--;
        for(int i=0;i<26;i++){
            if(count[i]!=0)
            return 0;
        }
        return 1;
    }
};
