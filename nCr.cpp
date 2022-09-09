#include<iostream>
using namespace std;
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int nCr(int n,int r){
    int num=factorial(n);
    int den=factorial(r)*factorial(n-r);
    int ans=num/den;
    return ans;
}
int main(){
    int n,r;
    int res=0;
    cout<<"Enter n and r"<<endl;
    cin>>n>>r;
    res=nCr(n,r);
    cout<<res<<endl;
   return 0; 
}