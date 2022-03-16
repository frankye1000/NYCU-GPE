/*a539: 10327 - Flip Sort*/
#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int A[n],c=0;
        for(int i=0;i<n;i++) cin>>A[i];
        
        for(int j=0;j<n-1;j++){
            int sp=0;
            for(int i=n-1;i>0;i--){
                if(A[sp]>A[sp+1]){
                    int temp=A[sp];
                    A[sp]=A[sp+1];
                    A[sp+1]=temp;
                    c++;
                }
                sp+=1;
            }
        }

        cout<<"Minimum exchange operations : "<<c<<endl;
    }

    return 0;
}