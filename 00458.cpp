/* f434: 00458 - The Decoder */
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        for(int i=0;i<s.length();i++){
            cout<<char(int(s[i])-7);
        }
        cout<<endl;
    }
    return 0;
}