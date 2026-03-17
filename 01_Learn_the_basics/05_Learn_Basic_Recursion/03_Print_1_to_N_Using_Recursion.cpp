#include<bits/stdc++.h>
using namespace std;
void linear(int a,int n){
    if(a>n) return ;
    cout<<a<<endl;
    linear(++a,n);
}
int main(){
  int n;
  cin>>n;
  linear(1,n);
  return 0;
}
