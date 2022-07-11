/* 11728 Alternate Task*/
#include<iostream>
using namespace std;

/*給你某數因數的總和，你要找出某數，如果有多個某數，找最大的某數*/

int factorSum(int n){
    int suM=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            suM+=i;
        }
    }
    return suM;
}

int main(){
    //找因數
    int n,c=1;
    while(cin>>n && n!=0){
        int flag=-1;
        for(int i=1;i<=n;i++){
            if(n==factorSum(i)){
                flag=i;
            }
        }
        cout<<"Case "<<c<<": "<<flag<<endl;
        c++;
    }
    return 0;
}