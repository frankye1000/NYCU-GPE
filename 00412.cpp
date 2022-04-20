/*c087: 00412 - Pi*/

#include<iostream>
#include<cmath>
using namespace std;

bool chechprim(int a, int b){
    while(b%a!=0){
        int temp=a;
        a=b%a;
        b=temp;
    }
    if(a==1) return true;
    else return false;
}

int main(){
    int n;
    while(cin>>n&&n!=0){
        int t=0,c=0,A[n];
        // store in array A
        for(int i=0;i<n;i++) cin>>A[i];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(chechprim(A[i],A[j])) c++;
                t++;
            }
        }
        if(c==0) cout<<"No estimate for this data set."<<endl;
        else{
            float y=(float)t/(float)c;
            printf("%f\n", sqrt(6*y));
        }
    }
    return 0;
}