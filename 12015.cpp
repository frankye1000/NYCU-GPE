/*a130: 12015 - Google is Feeling Lucky*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int rank[10];
        string url[10];

        for(int j=0;j<10;j++) cin>>url[j]>>rank[j];
        
        int maxrank=rank[0];
        for(int j=1;j<10;j++){
            if(rank[j]>maxrank){
                maxrank=rank[j];
            }
        }
        
        cout<<"Case #"<<i<<":"<<endl;
        for(int j=0;j<10;j++){
            if(rank[j]==maxrank){
                cout<<url[j]<<endl;
            }
        }
    }

    return 0;
}