#include<iostream>
using namespace std;
int AP(int n){
    int res=0;
    res=(3*n)+7;
    return res;
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int x=AP(n);
    cout<<x<<endl;
   return 0; 
}