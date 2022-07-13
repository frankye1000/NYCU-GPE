/*10921: Find the Telephone*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string key  ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string value="22233344455566677778889999";
    string s;
    while(cin>>s){
        int phonenumber=0, hyphens=0;
        string re;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='-') hyphens++,re+='-';
            else if(s[i]=='0') re+='0';
            else if(s[i]=='1') re+='1';
            else {
                re+=value[key.find(s[i])];
                phonenumber++;
            }

        }

        cout<<re<<" "<<phonenumber<<" "<<hyphens<<endl;
    }
    return 0;
}