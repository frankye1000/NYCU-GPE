/* 10222: Decode the Mad man */
#include <iostream>
#include <string>
using namespace std;

/* 這一題就是往左兩個鍵盤，就是對應的字*/
int main(){
    int n;
    string s;
    string key   = " 234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./";
    string value = " `1234567890qwertyuiop[asdfghjklzxcvbnm,";
    (cin>>n).get();
    for(int i=0;i<n;i++){
        getline(cin, s);
        for(int i=0;i<s.length();i++){
            cout<<value[key.find(tolower(s[i]))];
        }
        cout<<endl;
    }

    return 0;
}