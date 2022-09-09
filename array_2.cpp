#include<iostream>
using namespace std;
void print_array(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[15]={2,7,5};
    print_array(a,15);
    int x=sizeof(a)/sizeof(int);
    cout<<x<<endl;

    char ch[5]={'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;

   return 0; 
}