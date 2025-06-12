class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        string ans;
        int sum=0,carry=0;
        int i=s1.size()-1,j=s2.size()-1;
        while(i>=0 && j>=0){
            sum=(s1[i]-'0')+(s2[j]-'0')+carry;
            if(sum==1){
                carry=0;
                ans+='1';
            }
            else if(sum==2){
                carry=1;
                ans+='0';
            }
            else if(sum==3){
                carry=1;
                ans+='1';
            }
            else{
                ans+='0';
            }
            i--,j--;
        }
        while(i>=0){
            sum=(s1[i]-'0')+carry;
            if(sum==1){
                carry=0;
                ans+='1';
            }
            else if(sum==2){
                carry=1;
                ans+='0';
            }
            else{
                ans+='0';
            }
            i--;
        }
        while(j>=0){
            sum=(s2[j]-'0')+carry;
            if(sum==1){
                carry=0;
                ans+='1';
            }
            else if(sum==2){
                carry=1;
                ans+='0';
            }
            else{
                ans+='0';
            }
            j--;
        }
        if(carry==1)
        ans+='1';
        i=ans.size()-1;
        while(ans[i]!='1'){
            ans.pop_back();
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
