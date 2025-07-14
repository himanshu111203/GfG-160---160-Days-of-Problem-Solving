class Solution {
  public:
    double power(double b, int e) {
        // code here
        if(e==0)
        return 1;
        if(e<1)
        return 1/power(b,-e);
        double temp=power(b,e/2);
        if(e%2)
        return b*temp*temp;
        else
        return temp*temp;
    }
};
