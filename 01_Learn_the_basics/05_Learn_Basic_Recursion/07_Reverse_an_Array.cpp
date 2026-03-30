#include<bits/stdc++.h>
using namespace std;
void reverse_array(int a[],int n,int i){
        if(i>=n/2) return ;
        swap(a[i],a[n-i-1]);
        reverse_array(a,n,i+1);
}
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int &i:a) cin>>i;
  reverse_array(a,n,0);
  for(int i:a) cout<<i<<" ";
  return 0;
}
