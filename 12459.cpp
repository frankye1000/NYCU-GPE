/* a519: 12459 - Bees' ancestors */
#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        long long a=1,b=2; 
        if(n==1) cout<<a<<endl;
        else if(n==2) cout<<b<<endl;
        else{
            for(int i=3;i<=n;i++){
                long long temp = b;
                b = a + b;
                a = temp;
            }
            cout<<b<<endl;
        }
    }

    return 0;
}