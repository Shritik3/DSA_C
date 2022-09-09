#include<iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    cin>>n;
    bool x=isEven(n);
    if(x){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
   return 0; 
}