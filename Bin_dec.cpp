// n=10
// divide by 2
// store the remainder
// repaet the steps till n is zero
// reverse the ans

// other logic
// number and 1 means odd else even
// until n!=0
// bit=n&1
// n>>1

// ans=digit*10^i+prev ans  (reverse no)
// normal no ns=digit*10^i+prev ans
#include<iostream>
#include<math.h>
using namespace std;
int main(){

    // decimal to binary
    // int n;
    // int i=10;
    // int ans=0;
    // cin>>n;
    // while(n!=0){
    //     // int digit=n%10;
    //     int bit=n&1;
    //     ans=(bit*pow(10,i))+ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<"Answer is "<<ans<<endl;
    int n=1010;
    int i=0;
    int s=0;
    // for negative no 
    // remove sign then 2's complement
    // binary to decimal
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            s=s+pow(2,i);
            i=i+1;
        }
        else{
            s=s;
            i=i+1;
        }
        n=n/10;
    }
    cout<<"Answer is "<<s<<endl;

    

    // to extract last digit we use mod
    // to extract bit we work on the binary &1 and right shift 1

}