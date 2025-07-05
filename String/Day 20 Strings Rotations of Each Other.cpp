class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        // Your code here
        if(s1.size()!=s2.size())
        return 0;
        int i=0,j=0,count=0,flag=0;
        while(i<s1.size()){
            if(j>=s2.size())
            j=j%s2.size();
            if(s1[i]!=s2[j])
            j++;
            if(s1[i]==s2[j])
            i++,j++;
            count++;
            if(count>=2*s1.size()){
                flag=1;
                break;
            }
        }
        return flag==0;
    }
};
