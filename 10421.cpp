// 10421:All You Need Is Love

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    int N;
    string S, L;
    cin >> N ;
    cout<<N<<endl; 
    for(int i=1; i<=N; i++){
        cin >> S >> L;
        float S_N, L_N;
        int j;
        string one = "1";
        for(j=0; j<S.length(); j++){
            
            if(S[j] == one) S_N+=pow(10, j);
            cout<<"S_N="<<S_N<<endl;
        }
        for(j=0; j<S.length(); j++){
            if(L[j] == one) L_N+=pow(10, j);
        }

        cout<<S_N<<"|"<<L_N<<endl;
        
    }






    return 0;
}

