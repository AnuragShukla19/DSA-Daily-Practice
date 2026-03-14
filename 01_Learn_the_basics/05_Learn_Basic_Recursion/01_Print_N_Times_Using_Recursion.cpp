#include<bits/stdc++.h>
using namespace std;
void name(int a,int n){
    if(a>n) return ;
    cout<<"Anurag Shukla"<<endl;
    name(++a,n);
}
int main(){
  int n;
  cin>>n;
  name(1,n);
}
