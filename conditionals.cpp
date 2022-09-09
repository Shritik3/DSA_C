#include<iostream>
using namespace std;
int main(){
//     int n;
//     cin>>n;
//     // cout<<"Value of n is:"<<n<<endl;
//     if(n>0){
//         cout<<"n is positive"<<endl;
//     }
//     else{
//         cout<<"n is negative"<<endl;
//     }
// int a,b;
// cin>>a>>b;
// // a=cin.get();
// cout<<a<<" "<<b<<endl;
// int a ,b;
// cout<<"Enter value of a"<<endl;
// cin>>a;
// cout<<"Enter value of b"<<endl;
// cin>>b;
// if(a>b){
//     cout<<"A is greater";
// }
// else{
//     cout<<"B is greater";
// }
// int a ;
// cout<<"Enter value of a"<<endl;
// cin>>a;
// if(a>0){
//     cout<<"A is positive";
// }
// else if(a<0){
//     cout<<"A is negative";
// }
// else{
//     cout<<"A is zero";
// }
// char ch;
// int a;
// cout<<"Enter character"<<endl;
// cin>>ch;
// a=int(ch);
// if ((a>=97)&&(a<=122)){
//     cout<<"CH is small alpabet";
// }
// else if((a>=65)&&(a<=90)){
//     cout<<"CH is uppercase";
// }
// else if((a>=48)&&(a<=57)){
//     cout<<"Ch is a digit";
// }
int n;
cin>>n;
int i=2;
// int s=0;
int c=0;
// while(i<=n){
//     cout<<i<<" ";
//     i=i+1;
// }
// while(i<=n){
//     s=s+i;
//     i=i+1;
// }
// cout<<s;
// while(i<=n){
//     s=s+i;
//     i=i+2;
// }
// cout<<s;
while(i<n){
    if(n%2==0){
        c=c+1;
    }
    else{
        c=c;
    }
    i=i+1;
}
if(c>0){
    cout<<"Not prime no";
}
else{
    cout<<"Prime no";
}
}

