/* c013: 00488 - Triangle Wave */
#include <iostream>
using namespace std;

int print(int A, int F){

    for(int f=0;f<F;f++){

        for(int a=1;a<=A;a++){
            for(int i=0;i<a;i++){
                cout<<a;
            }
            cout<<endl;
        }

        for(int a=A-1;a>0;a--){
            for(int i=0;i<a;i++){
                cout<<a;
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 1;
}


int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int A,F;
        cin>>A;
        cin>>F;
        print(A,F);
    }


    return 0;

}