#include<iostream>
using namespace std;
int getMax(int num[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int getMin(int num[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        // mini=min(mini,num[i]);
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int main(){
    int num[100];
    int n=5;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int max=getMax(num,n);
    int min=getMin(num,n);
    cout<<max<<" "<<min;


    
   return 0; 
}