/* 10326 The Polynomial Equation*/

#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int A[n+1]={};
        A[0]=1;
        for(int i=1;i<=n;i++){
            int m;
            cin>>m;
            for(int j=i;j>0;j--){
                A[j]=A[j]+A[j-1]*(-m);
            }
        }
        
        if (n == 1) cout << "x";
        else cout << "x^" << n;
        for(int i = 1; i < n; i++){
            if (A[i] == 0) continue;
            if (A[i] < 0) cout << " - ";
            else cout << " + ";
            if (abs(A[i]) != 1) cout << abs(A[i]);
            if (n-i == 1) cout << "x";
            else cout << "x^" << n-i;
        }
        if (A[n] < 0) cout << " - ";
        else cout << " + ";
        cout << abs(A[n]) << " = 0\n";
    }
    
    return 0;
}