#include<iostream>
using namespace std;
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;

    }
    return count;
}
int main(){
    // char a='z';
    // multiple characters can be stored using character array and string

    // cin>>arr[i]
    char name[10];
    cout<<"Enter your name"<<endl;
    // cin stops execution at space
    cin>>name;
    cout<<"Your name is : ";
    cout<<name<<endl;
    cout<<"Length "<<getlength(name)<<endl;
    // null /o character at the end whose ascii value is zero to use it as terminator
    return 0;

}

