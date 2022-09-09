#include<iostream>
using namespace std;
char getmaxoccurchar(string s){
    int arr[26]={0};
    int n=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            n=s[i]-'a';

        }else{
            n=s[i]-'A';
        }
       arr[n]++; 
    }
    int max=-1,ans=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            ans=i;
            max=arr[i];
        }

    }
    char finalans='a'+ans;
    return finalans;

}
int main(){
    // cin.getline(str,len);
    // strcmp(s1,s2);
    // strcpy(dst,src);
    string s;
    cin>>s;
    cout<<getmaxoccurchar(s)<<endl;

    return 0;
}