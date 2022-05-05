/* f445: 263 - Number Chains */
#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

int func(string s){
    //ascending
    sort(s.begin(), s.end());
    int a=stoi(s);
    //desending
    int b = 0;
    int ten = 1;
    for(int i=0;i<s.length();i++){
        int t1 = s[i]-'0';
        b+=t1*ten;
        ten*=10;
    } 
    cout<<b<<" - "<<a<<" = "<<b-a<<endl; 
    return b-a;
}

int main(){
    string s;
    while(cin>>s && s!="0"){
        cout<<"Original number was "<<s<<endl;
        string temp="0";
        for(int i=0;i<5000;i++){
            temp = s;
            s = to_string(func(s));
            if(temp==s){
                cout<<"Chain length "<<i+1<<endl;
                cout<<endl;
                break;
            } 
            }
        }
    return 0;
}