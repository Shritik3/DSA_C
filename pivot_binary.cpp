#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s=0,e=n-1;
    // int mid=(s+e)/2;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        // if s is (2^31)-1 if we add the value might get out of range
        // mid=(s+e)/2;
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[6]={8,10,1,2,3,4};
    int a=getPivot(arr,6);
    cout<<"Pivot is "<<a<<endl;    
    return 0; 
}