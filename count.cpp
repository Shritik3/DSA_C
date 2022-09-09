#include<iostream>
using namespace std;
// void for no return
void count(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    // no value is eturned as the function type is void
    return ;

}
int main(){
    int n;
    cin >> n;
    count(n);
   return 0; 
}