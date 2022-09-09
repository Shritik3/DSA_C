#include<iostream>
using namespace std;
int main(){
    int num[10];
    cout<<"Value at 0 index "<<num[0]<<endl;
    int arr[3]={5,7,11};
    cout<<"Value at 2nd index"<<arr[2]<<endl;
    int a[15]={1,2};
    int n=15;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // initialise all value to zeros
    int b[15]={0};
    int no=15;
    for(int i=0;i<no;i++){
        cout<<b[i]<<" ";
    }



    
   return 0; 
}