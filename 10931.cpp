/*a132: 10931 - Parity*/

#include<iostream>
using namespace std;



int parity(int a){
    int t=a,c=0;
    while(t/2!=0){
        //cout<<"t= "<<t<<endl;
        if(t%2==1){
            c++;
        }
        t/=2;
    }
    c++;
    return c;
}


int main(){
    int a;
    while(cin>>a&&a!=0){

        int t=a,index=0,A[33];
        while(t/2!=0){
            A[index]=t%2;
            t/=2;
            index++;
        }
        A[index]=1;
        
        cout<<"The parity of ";
        for(int i=index;i>-1;i--) cout<<A[i];
        cout<<" is "<<parity(a)<<" (mod 2)."<<endl;
    }
    return 0;
}