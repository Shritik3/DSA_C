#include<iostream>
using namespace std;
void dummy(int n){
    // this n is copy of main function wala n
    n++;
    cout<<n<<endl;
    // return n;
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    dummy(n);
    cout<<n<<endl;
   return 0; 
}