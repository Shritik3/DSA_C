#include<iostream>
using namespace std;
void update(int a[],int n){
    // in value pass by value in main the value does not gets updated
    // but value in array gets updated
    a[0]=120;
    for(int i=0;i<3;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[3]={1,2,3};
    // we give memory address of first element of array
    update(a,3);
    for(int i=0;i<3;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   return 0; 
}


// power of 2
// calculate number of set bit 1
// then ans one otherwise zero