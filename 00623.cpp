/*c120: 00623 - 500!*/
#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int size=2600;



        cout<<n<<"!"<<endl;
        int A[size]={};
        A[0] = 1;
        if(n==0 || n==1){
            cout<<1<<endl;
        }else{
            for(int i=2;i<=n;i++){
                int p = 0;
                for(int j=0;j<size;j++){
                    int temp = A[j]*i + p ;
                    A[j] = temp%10;
                    p = temp/10; //下一次進位
                }

            }

            int y = 0;
            for(int i=size-1;i>-1;i--){
                if(A[i]!=0){
                    y = i;
                    break;
                }
                
            }
            for(int i=y;i>-1;i--) cout<<A[i];
            cout<<endl;
            
        }
    }

    return 0;
}