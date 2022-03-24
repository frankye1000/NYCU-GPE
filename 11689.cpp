/*a536: 11689 - Soda Surpler*/
#include <iostream>
using namespace std;

int main(){
    int n,a1,a2,b;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a1>>a2>>b;
        int a=a1+a2;
        int c=0;
        int r=0;
        while(a/b!=0){
            c += a/b;
            r = a%b;
            a /= b;
            a += r;
        }
        cout<<c<<endl;
        
    }
    return 0;
}
