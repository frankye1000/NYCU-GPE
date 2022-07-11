/*d261: 11000 - Bee*/
#include <iostream>
using namespace std;

int main(){
    long long A[50]={}, B[50]={};
    A[0]=0; //公
    B[0]=1; //母
    for(int i=1;i<=49;i++){
        A[i]=A[i-1]+B[i-1];
        B[i]=A[i-1]+1;
    }

    int n;
    while(cin>>n && n!=-1){
        cout<<A[n]<<' '<<A[n]+B[n]<<endl;
    }
    return 0;
}
