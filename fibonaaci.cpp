#include<iostream>
using namespace std;
void fib(int n){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    fib(n);
   return 0; 
}