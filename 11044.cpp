/* d039: 11044 - Searching for Nessy */

#include<iostream>
using namespace std;
int main(){
    int t,n,m,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m;
        a=n-2;
        b=m-2;
        if(a%3!=0) a=a/3+1;
        else a=a/3;
        if(b%3!=0) b=b/3+1;
        else b=b/3;

        cout<<a*b<<endl;
    }

    return 0;
}