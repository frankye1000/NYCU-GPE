/*c024: 10079 - Pizza Cutting*/
#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n&&n>0){
        if(n==1){
            cout<<2<<endl;
        }else{
            long long t=2;
            for(int i=2;i<=n;i++){
                t+=i;
            }
            cout<<t<<endl;
        }
    }
    return 0;
}