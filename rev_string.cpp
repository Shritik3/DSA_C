#include<iostream>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;}
    else{
            char temp=ch-'A'+'a';
            return temp;
        }
    
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }

}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;

    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    // cin stops execution at space
    cin>>name;
    cout<<"Your name is : ";
    cout<<name<<endl;
    int n=getlength(name);
    cout<<"Length "<<getlength(name)<<endl;
    cout<<"After reverse"<<endl;
    reverse(name,n);
    cout<<name<<endl;
    cout<<"To lower case"<<toLowerCase('b')<<endl;
    cout<<"To lower case"<<toLowerCase('C')<<endl;



    // null /o character at the end whose ascii value is zero to use it as terminator
    return 0;

}

// Palindrome string
// int getlength(char name[]){
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;

//     }
//     return count;
// }
// bool checkPalindrome(char str[]) {
//     // Write your code here
//     int st=0;
//     int n=getlength(str);
//     int e=n-1;
//     while(st<e){
//         if(str[st]==str[e]){
//             st++;
//             e--;
//         }
//         else{
//             return 0;
//         }
//     }
//     return 1;
// }
