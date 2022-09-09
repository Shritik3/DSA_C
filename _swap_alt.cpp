#include<iostream>
using namespace std;
void swap_alt(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        if((i+1)<n){
            // swap(arr[i],arr[i+1]);
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[8]={1,2,3,4,5,6,7,8};
    swap_alt(a,8);
    int b[8]={1,2,3,4,5,6,7};
    swap_alt(b,7);
   return 0; 
}