/* a221: 11734 - Big Number of Teams will Solve This*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int n;
    (cin>>n).get();
    string s,t;
    for(int i=1;i<=n;i++){
        getline(cin,s);
        getline(cin,t);
        if(s==t){
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        else{
            stringstream ss(s);
            string temp, fi;
            while(getline(ss, temp, ' ')){
                fi += temp;
            }
            if(fi==t) cout<<"Case "<<i<<": Output Format Error"<<endl;
            else cout<<"Case "<<i<<": Wrong Answer"<<endl;
        }
    }
    return 0;
}