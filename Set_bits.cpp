#include<iostream>
using namespace std;
int set_bit(int a,int b){
    int c1=0;
    int c2=0;
    int c=0;
    int r;
    while(a!=0){
        if(r=a&1){
            if(r==1){
                c1=c1+1;
            }
        }
        a=a>>1;
    }
    while(b!=0){
        if(r=b&1){
            if(r==1){
                c2=c2+1;
            }
        }
        b=b>>1;
    }
    c=c1+c2;
    return c;
}
int main(){
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    int x=set_bit(a,b);
    cout<<x;
   return 0; 
}