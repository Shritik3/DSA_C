// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter value of a"<<endl;
//     cin>>a;
//     cout<<"Enter value of b"<<endl;
//     cin>>b;
//     char op;
//     cout<<"Enter operator to use"<<endl;
//     cin>>op;
//     switch(op){
//         case '+':cout<<(a+b)<<endl;break;

//         case '-':cout<<(a-b)<<endl;break;

//         case '*':cout<<(a*b)<<endl;break;

//         case '/':cout<<(a/b)<<endl;break;

//         case '%':cout<<(a+b)<<endl;break;
//         default:cout<<"Operator is invalid"<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of total amount"<<endl;
    cin>>a;
    int n=1;
    int r=0;
    int i=1;
    switch(i){
        case 1:r=a/100;a=a-(r*100);cout<<r<<" 100 Notes"<<endl;

        case 2:r=a/50;a=a-(r*50);cout<<r<<" 50 Notes"<<endl;

        case 3:r=a/20;a=a-(r*20);cout<<r<<" 20 Notes"<<endl;

        case 4:r=a/1;a=a-(r*1);cout<<r<<" 1 Notes"<<endl;

        case '%':cout<<(a+b)<<endl;
        default:cout<<"Operator is invalid"<<endl;
    }
}