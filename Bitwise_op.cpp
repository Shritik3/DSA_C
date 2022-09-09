#include<iostream>
using namespace std;
int main(){
    // int a=4;
    // int b=6;
    // cout<<"a&b "<<(a&b)<<endl;
    // cout<<"a|b "<<(a|b)<<endl;
    // cout<<"~a "<<~a<<endl;
    // cout<<"a^b "<<(a^b)<<endl;
    // cout<<(17>>1)<<endl;
    // cout<<(17>>2)<<endl;
    // cout<<(19<<1)<<endl;
    // cout<<(21<<2)<<endl;
    // int i=7;
    // cout<<(i++)<<endl;
    // // 7 8
    // cout<<(++i)<<endl;
    // // 9
    // cout<<(i--)<<endl;
    // // 9 8
    // cout<<(--i)<<endl;
    // // 7
    // int x,y=1;
    // a=10;
    // if(++x){
    //     cout<<y;
    // }
    // else{
    //     cout<<++y;
    // }
    // int n;
    // cout<<"Enter n"<<endl;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<i<<endl;
    // }
    // Infinite loop of for
    // avoid it with break
    // int i=1;
    // for(;;){
    //     if(i<=n){
    //         cout<<i<<endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }
    // for(int a=0,b=1;a>=0&&b>=1;a--,b--){
    //     cout<<a<<" "<<b<<endl;
    // }
    // int n;
    // cout<<"Enter n"<<endl;
    // cin>>n;
    // int s=0;
    // for(int i=1;i<=n;i++){
    //     s=s+i;
    // }
    // cout<<s;
    // Fibonacci series
    // int a=0;
    // int b=1;
    // int n=10;
    // cout<<a<<" "<<b<<" ";
    // for(int i=1;i<=n-2;i++){
    //     int c=a+b;
    //     cout<<c<<" ";
    //     // no value pollute
    //     a=b;
    //     b=c;
    // }

    // Prime
    // int n=7;
    // int c=0;
    // for(int i=2;i<n;i++){
    //     if(n%2==0){
    //         c=c+1;
    //     }
    //     else{
    //         c=c;
    //     }
    // }
    // if(c>0){
    //     cout<<"Not a Prime no";
    // }
    // else{
    //     cout<<"Prime no";
    // }


    // bool isPrime=1;
    // int n=7;
    // int c=0;
    // for(int i=2;i<n;i++){
    //     if(n%2==0){
    //         cout<<"Not a prime no"<<endl;
    //         isPrime=0;
    //         break;
    //     }
    // }
    // if(isPrime==0){
    //     cout<<"Not a prime no";
    // }
    // else{
    //     cout<<"Prime no";
    // }


    // for(int i=0;i<5;i++){
    //     cout<<"HI"<<endl;
    //     cout<<"HEY"<<endl;
    //     continue;
    //     cout<<"reply toh de de";
    // }

    // for(int i=0;i<=15;i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

    // scope of variable
    int a=10;
    cout<<a<<endl;
    if(true)
    {
        // cout<<a<<endl;
        // no wrror because scope is in if
        int a =5;
        cout<<a<<endl;
    }
    cout<<a<<endl;
}