#include<bits/stdc++.h>
using namespace std;
void pattern16(int n){
    char start='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
        }
        cout<<endl;
        start++;
    }
}
int main(){
    int n;
    cin>>n;
    pattern16(n);
    return 0;
}
