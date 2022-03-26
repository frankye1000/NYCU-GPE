/*a540: 10684 - The jackpot*/
#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        int A[n];
        for(int i=0;i<n;i++) cin>>A[i];

        int max=0;
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=i;j<n;j++){
                temp+=A[j];
                if(temp>max) max=temp;
            }
        }
        if(max<=0) cout<<"Losing streak."<<endl;
        else cout<<"The maximum winning streak is "<<max<<"."<<endl;
    }
    return 0;
}