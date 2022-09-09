#include<iostream>
using namespace std;
int main(){
    int n=2;
    int num=1;
    cout<<endl;
    switch(n){
        // it is true until we break the switch
        case '1':
        cout<<"First"<<endl;
        break;
        case 2:switch(num){
            case 1:cout<<"Value of num is "<<num<<endl;
            break;
        }
        cout<<"Second"<<endl;
        break;
        // if doesn't match go to default case
        default:
        cout<<"it is default"<<endl;
    }
    cout<<endl;
    return 0;
}
// if we use switch case in an infinite loop
// like switch inside infinite while loop we use exit()

// continue in case of switch is not valid