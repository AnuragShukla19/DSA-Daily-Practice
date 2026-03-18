#include<bits/stdc++.h>
using namespace std;
void linear_inverse(int a,int n){
    if(a<1) return ;
    cout<<a<<endl;
    linear_inverse(--a,n);
}
int main(){
  int n;
  cin>>n;
  linear_inverse(n,n);
  return 0;
}
