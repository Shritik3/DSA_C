#include<iostream>
using namespace std;
// intpower(int a,int b)
int power(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    // bulky,buggy and readble to avoid we use functions for a well defined task
//     int a,b;
//     cin>>a>>b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     cout<<"anwer is "<<ans<<endl;

    
//    return 0; 


//     int c,d;
//     cin>>c>>d;
//     int an=1;
//     for(int i=1;i<=d;i++){
//         an=an*c;
//     }
//     cout<<"anwer is "<<an<<endl;

    
//    return 0; 
    // int a,b;
    int res=0;
    // cin>>a>>b;
    res=power();
    cout<<res<<endl;
    return 0;

}