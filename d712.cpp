//  d712 - The 3n + 1 problem
#include<iostream>
using namespace std;

int fun(int n){
    int length = 1;
    while(n!=1){
        if(n%2==1) n=3*n+1;
        else n/=2;
        length++;
    }
    return length;
}

int main(){
    int i,j;
    while(cin>>i>>j){
        if(i>j){
            int t=i;
            i=j;
            j=t;
        }

        int ans=0;
        for(int x=i;x<=j;x++){
            int temp = fun(x);
            if(temp>ans) ans=temp;
        }
        cout<<i<<' '<<j<<' '<<ans<<endl;
    }
    
    return 0;
}