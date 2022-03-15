/*a111: 12149 - Feynman*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int N;
    while(cin>>N && N!=0){
        int c=0;
        for(int i=1;i<=N;i++){
            c+=pow(i,2); 
        }
        cout<<c<<endl;

    }


    return 0;
}