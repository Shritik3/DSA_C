#include<iostream>
using namespace std;
// 2 pointer approach
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void sortOne(int arr[],int n){
    int t=0;
    int left=0,right=n-1;
    // int step=0;
    while(left<right){
        while(arr[left]==0  && left<right){
            left++;
        }
        while(arr[right]==1  && left<right){
            right--;
        }
        if(arr[left]==1 && arr[right]==0 && left<right)
            t=arr[left];
            arr[left]=arr[right];
            arr[right]=t;
            left++;
            right--;
    }
}
int main(){
    int arr[8]={1,1,0,0,0,1,0,1};
    sortOne(arr,8);
    printarr(arr,8);
    return 0;
}