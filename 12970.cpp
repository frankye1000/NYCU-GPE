/*12970 Alcoholic Pilots*/
#include <iostream>
using namespace std;

int main(){
    float v1,d1,v2,d2,cas=1;
    while(cin>>v1>>d1>>v2>>d2){
        if(v1==0 && d1==0 && v2==0 && d2==0) break;
        float p1=d1/v1, p2=d2/v2;
        int total = p1+p2;
        
        if(p1>p2) cout<<"Case #"<<cas<<": No beer for the captain."<<endl;
        else cout<<"Case #"<<cas<<": You owe me a beer!"<<endl;
        
        cout<<"Avg. arrival time: ";
        if(total%2==0) cout<<total/2<<endl;
        else cout<<total<<"/2"<<endl;
        cas++;
    }

    return 0;
}