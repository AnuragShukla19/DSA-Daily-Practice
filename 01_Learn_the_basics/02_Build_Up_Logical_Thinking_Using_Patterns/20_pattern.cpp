#include<bits/stdc++.h>
using namespace std;
void pattern20(int n){
    for(int i=0;i<2*n-1;i++){
        if(i<n){
        for(int j=0;j<=i;j++){
            cout<<"* "; 
        }
        for(int j=0;j<2*(n-i-1);j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* "; 
        }
        cout<<endl;
        }
        else{
            for(int j=i;j<2*n-1;j++){
                cout<<"* ";
            }
            for(int j=0;j<2*(i+1-n);j++){
                cout<<"  ";
            }
            for(int j=i;j<2*n-1;j++){
                cout<<"* ";
            }
            cout<<endl;
        }   
    }
}
int main(){
    int n;
    cin>>n;
    pattern20(n);
    return 0;
}
