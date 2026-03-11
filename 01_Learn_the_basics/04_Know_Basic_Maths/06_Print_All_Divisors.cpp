#include<bits/stdc++.h>
class Solution {
  public:
    void print_divisors(int n) {
        vector<int> v;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
             cout<<i<<" ";
             if(i!=n/i) v.emplace_back(n/i);
            }
        }
        for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
        return ;
    }
};
