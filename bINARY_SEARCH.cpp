#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    // int mid=(s+e)/2;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        // if s is (2^31)-1 if we add the value might get out of range
        // mid=(s+e)/2;
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    // Array of size decreases and no of comparision is vary less
    // O(log n)
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};
    int index=binary(even,6,5);
    cout<<index<<endl;

    
   return 0; 
}