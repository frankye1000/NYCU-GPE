/*a538: 11879 - Multiple of 17 */
#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    while(cin >> a && a != "0"){
        int temp = 0;
        for(int i=0;i<a.length();i++){
            temp += a[i]-'0';
            int l = temp % 17;
            temp = l*10;
        }
        if(temp%17==0) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}