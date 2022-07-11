/*10642 Can You Solve It?*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c,d;
    for(int i=1; i<=n; i++){
        cin>>a>>b>>c>>d;
        int tempx=0,tempy=0;
        for(int j=1;j<=a+b;j++) tempx+=j;
        tempx+=a;
        for(int j=1;j<=c+d;j++) tempy+=j;
        tempy+=c;
        cout<<"Case "<<i<<": "<<tempy-tempx<<endl;
    }
    return 0;
}