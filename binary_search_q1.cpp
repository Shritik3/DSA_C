#include<iostream>
using namespace std;
int first_occ(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    // int mid=(s+e)/2;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        // if s is (2^31)-1 if we add the value might get out of range
        // mid=(s+e)/2;
        mid=s+(e-s)/2;
    }
    return ans;
}
int last_occ(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    // int mid=(s+e)/2;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        // if s is (2^31)-1 if we add the value might get out of range
        // mid=(s+e)/2;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[6]={1,2,3,3,5,6};
    int a=first_occ(even,6,3);
    cout<<a<<endl;
    int b=last_occ(even,6,3);
    cout<<b<<endl;
    return 0; 
}
// Other application
// find total occurence of 3 in array
// total no of occ=last_index-first_index



// codestudio
// first and last position of an element in array
// int first_occ(vector<int> &arr,int n,int key){
//     int s=0,e=n-1;
//     int ans=-1;
//     // int mid=(s+e)/2;
//     int mid=s+(e-s)/2;
//     while(s<=e)
//     {
//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         else if(key>arr[mid]){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         // if s is (2^31)-1 if we add the value might get out of range
//         // mid=(s+e)/2;
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int last_occ(vector<int> &arr,int n,int key){
//     int s=0,e=n-1;
//     int ans=-1;
//     // int mid=(s+e)/2;
//     int mid=s+(e-s)/2;
//     while(s<=e)
//     {
//         if(arr[mid]==key){
//             ans=mid;
//             s=mid+1;
//         }
//         else if(key>arr[mid]){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         // if s is (2^31)-1 if we add the value might get out of range
//         // mid=(s+e)/2;
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
// {
//     pair<int,int> p;
//     p.first=first_occ(arr,n,x);
//     p.second=last_occ(arr,n,x);
//     return p;
// }



