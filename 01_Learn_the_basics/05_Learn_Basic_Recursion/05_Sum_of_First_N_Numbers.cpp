#include<bits/stdc++.h>
using namespace std;
int sum_numbers(int n){
    if(n==0) return 0;
    return sum_numbers(n-1)+n;
}
int main(){
    int n;
    cin>>n;
    cout<<sum_numbers(n)<<endl;
    return 0;
}
