/* c032: 00382 - Perfection */

#include<iostream>
using namespace std;


int main(){
    cout<<"PERFECTION OUTPUT"<<endl;
    int a;
    while(cin>>a){
        if(a==0){
            cout<<"END OF OUTPUT"<<endl;
            break;
        }else{
            int c=0;
            for(int i=1;i<a;i++){
                if(a%i==0) c+=i;
            }
            if(a==c) cout<<a<<"  PERFECT"<<endl;
            else if(a>c) cout<<a<<"  DEFICIENT"<<endl;
            else cout<<a<<"  ABUNDANT"<<endl;
        }
    }
    return 0;
}