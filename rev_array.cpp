#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    // swap and inc/dec
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    // for(int i=n-1;i>=0;i++){
    //     a[c]=arr[i];  
    //     c=c+1;
    // }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return ;
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(a,10);
   return 0; 
}