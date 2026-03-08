class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long int r=0;
        int n=x;
        for(int i=0;n>0;i++){
            r=r*10+n%10;
            n/=10;
        }
        if(r==x) return true;

        return false;
    }
};
