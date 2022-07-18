/* 11498 Division of Nlogonia*/
#include<iostream>
using namespace std;

int main(){
    int n,x,y,t0,t1;
    while(cin>>n && n!=0){
        cin>>x>>y;   // center=(x,y)
        
        for(int i=0;i<n;i++){
            cin>>t0>>t1;
            if(t0==x || t1==y){
                cout<<"divisa"<<endl;
            }else{
                if (t0>x && t1>y) cout<<"NE"<<endl;
                else if (t0<x && t1>y) cout<<"NO"<<endl;
                else if (t0>x && t1<y) cout<<"SE"<<endl;
                else cout<<"SO"<<endl;
            }
        }
    }
    return 0;
}
