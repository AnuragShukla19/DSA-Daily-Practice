#include<bits/stdc++.h>
using namespace std;
bool valid_palindrome(string a,int l,int r){
    if(l>=r) return true;
    if(a[l]!=a[r]) return false;
    return valid_palindrome(a,l+1,r-1);
}
int main(){
  string a;
  getline(cin,a);
  cout<<valid_palindrome(a,0,a.size()-1);
  return 0;
}
