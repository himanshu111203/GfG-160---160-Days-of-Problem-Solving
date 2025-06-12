class Solution {
  public:
    char nonRepeatingChar(string &s) {
        // Your code here
        vector<int>count(26,0);
        for(char a:s){
            count[a-'a']++;
        }
        for(char a:s){
            if(count[a-'a']==1)
            return a;
        }
        return '$';
    }
};
