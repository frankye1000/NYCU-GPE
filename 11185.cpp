/*d318: 11185 - Ternary*/
#include<iostream>
using namespace std;

int main(){
    int a;
    while(cin>>a && a>=0){
        long long size=10000;
        int c=0, A[size]={};
        while(a/3!=0){
            A[c]=a%3;
            a/=3;
            c++;
        }
        A[c]=a%3;
        c++;

        for(int i=c-1;i>=0;i--){
            cout<<A[i];
        }
        cout<<endl;

    }
}