int Solution::solve(int A) {
    if(A==0) return 1;
    int n=A;
    int l=0;
    while(n){
        l++;
        n/=10;
    }
    n=A;
    int sum=0;
    while(n){
        sum+=pow(n%10,l);
        n/=10;
    }
    if(sum==A) return 1;
    return 0;
}
