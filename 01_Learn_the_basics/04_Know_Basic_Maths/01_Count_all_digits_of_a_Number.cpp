class Solution {
  public:
    int countDigits(int n) {
        int cnt=0;
        while(n){
            cnt++;
            n/=10;
        }
        return cnt;
    }
};
