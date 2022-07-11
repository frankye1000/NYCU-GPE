/* 13171 Pixel Art*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        int d=0,e=0,f=0;
        string s;
        cin>>a>>b>>c;
        cin>>s;

        for(int j=0;j<s.length();j++){
            if(s[j]=='M') a--;
            else if(s[j]=='Y') b--;
            else if(s[j]=='C') c--;
            else if(s[j]=='R') a--, b--;
            else if(s[j]=='G') b--, c--;
            else if(s[j]=='V') a--, c--;
            else if(s[j]=='B') a--, b--, c--;
        }

        if(a<0 || b<0 || c<0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES "<<a<<" "<<b<<" "<<c<<endl;
        }
    }
    return 0;
}
