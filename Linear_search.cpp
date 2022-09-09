#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"Enter the key to search"<<endl;
    cin>>key;
    bool found=search(a,10,key);
    if(found){
        cout<<"It is present";
    }
    else{
        cout<<"It is not present";
    }   
   return 0; 
}