#include<bits/stdc++.h>
class Solution {
  public:
    int gcd(int a, int b) {
        for(int i=0;a!=0 && b!=0;i++){
            if(a>b) a=a%b;
            else b=b%a;
            
        }
        if(a==0) return b;
        return a;
    }
};
