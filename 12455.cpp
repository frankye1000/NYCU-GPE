/* a522: 12455 - Bars */
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int t=0;t<T;t++){
        int n,p;
        cin>>n;
        cin>>p;
        int A[p], dp[n+1]={};
        for(int i=0;i<p;i++) cin>>A[i];
        
        for(int i=0;i<p;i++){
            for(int j=n;j>-1;j--){
                if(j>=A[i]){
                    dp[j]=max(dp[j],dp[j-A[i]]+A[i]);
                }
            }
        }
        if(dp[n]==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}